#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  // std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n < 5) {
      cout << "NO" << endl;
    } else if (n % 3) {
      if (n - 3 == 1 || n - 3 == 2) {
        cout << "NO" << endl;
        continue;
      }
      cout << "YES\n1 2 " << n - 3 << endl;
    } else {
      if (n - 5 == 1 || n - 5 == 4) {
        cout << "NO" << endl;
        continue;
      }
      cout << "YES\n1 4 " << n - 5 << endl;
    }
  }
}