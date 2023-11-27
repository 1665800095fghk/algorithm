#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  if (n % 10 == 0)
    cout << 0 << endl;
  else
    cout << n * 2 << endl;
}