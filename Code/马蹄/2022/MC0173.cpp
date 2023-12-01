#include "bits/stdc++.h"

using namespace std;

vector<string> v = {"rrr", "ggg", "bbb"};

void LR(int n, char c) {
  char tmp;
  if (c == 'L') {
    tmp = v[n][0];
    v[n][0] = v[n][1];
    v[n][1] = v[n][2];
    v[n][2] = tmp;
  } else {
    tmp = v[n][2];
    v[n][2] = v[n][1];
    v[n][1] = v[n][0];
    v[n][0] = tmp;
  }
}

void UD(int n, char c) {
  char tmp;
  if (c == 'U') {
    tmp = v[0][n];
    v[0][n] = v[1][n];
    v[1][n] = v[2][n];
    v[2][n] = tmp;
  } else {
    tmp = v[2][n];
    v[2][n] = v[1][n];
    v[1][n] = v[0][n];
    v[0][n] = tmp;
  }
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    string oper;
    cin >> oper;
    int n;
    char c;
    n = oper[0] - '0';
    c = oper[1];
    switch (c) {
    case 'L':
    case 'R':
      LR(n - 1, c);
      break;
    case 'U':
    case 'D':
      UD(n - 1, c);
      break;
    }
  }
  for (auto it : v)
    cout << it << endl;
}
