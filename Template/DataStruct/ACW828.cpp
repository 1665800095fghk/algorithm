#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int stk[N], idx = 0;

int main() {
  int m;
  cin >> m;
  while (m--) {
    int x;
    string op;
    cin >> op;
    if (op == "push") {
      cin >> x;
      stk[++idx] = x;
    } else if (op == "pop") {
      idx--;
    } else if (op == "empty") {
      cout << (idx == 0 ? "YES" : "NO") << endl;
    } else if (op == "query") {
      cout << stk[idx] << endl;
    }
  }
}
