#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool primary(int n) {
  for (int i = 2; i < n; ++i) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int num;
  cin >> num;
  if (primary(num)) {
    cout << "P" << endl;
    return 0;
  }
  if (num % 2 == 0) {
    cout << "E" << endl;
  } else {
    cout << "O" << endl;
  }
}