#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int head, e[N], ne[N], idx;

void init() {
  head = -1;
  idx = 0;
}

void add(int x) {
  e[idx] = x;
  ne[idx] = head;
  head = idx++;
}

void remove(int k) { ne[k] = ne[ne[k]]; }

void insert(int k, int x) {
  e[idx] = x;
  ne[idx] = ne[k];
  ne[k] = idx++;
}

int main() {
  init();
  int m;
  cin >> m;
  while (m--) {
    int k, x;
    char op;
    cin >> op;
    switch (op) {
    case 'H':
      cin >> x;
      add(x);
      break;
    case 'D':
      cin >> k;
      if (!k)
        head = ne[head];
      else
        remove(k - 1);
      break;
    case 'I':
      cin >> k >> x;
      insert(k - 1, x);
      break;
    }
  }
  int cur = head;
  while (cur != -1) {
    cout << e[cur] << " ";
    cur = ne[cur];
  }
}
