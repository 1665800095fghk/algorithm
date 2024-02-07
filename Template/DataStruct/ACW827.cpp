#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int e[N], l[N], r[N], idx;

void init() {
  r[0] = 1;
  l[1] = 0;
  idx = 2;
}

void add(int k, int x) {
  e[idx] = x;
  r[idx] = r[k];
  l[idx] = k;
  l[r[k]] = idx;
  r[k] = idx;
  idx++;
}

void remove(int k) {
  r[l[k]] = r[k];
  l[r[k]] = l[k];
}

int main() {
  init();
  int m;
  cin >> m;
  while (m--) {
    int k, x;
    string op;
    cin >> op;
    if (op == "L") {
      cin >> x;
      add(0, x);
    } else if (op == "R") {
      cin >> x;
      add(l[1], x);
    } else if (op == "D") {
      cin >> k;
      // 头尾占用0, 1
      remove(k + 1);
    } else if (op == "IL") {
      cin >> k >> x;
      add(l[k + 1], x);
    } else if (op == "IR") {
      cin >> k >> x;
      add(k + 1, x);
    }
  }

  for (int cur = r[0]; cur != 1; cur = r[cur])
    cout << e[cur] << " ";
}
