#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, t;
  string q;
  cin >> n >> t;
  cin >> q;
  while (t--) {
    for (int i = 0; i < n - 1; ++i) {
      if (q.at(i) == 'B' && q.at(i + 1) == 'G') {
        swap(q[i], q[i + 1]);
        i++;
      }
    }
  }
  std::cout << q;
}