#include "bits/stdc++.h"
#include <algorithm>
#include <iomanip>

using namespace std;

int n, m;

int main() {
  cin >> n >> m;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;
  while (m--) {
    next_permutation(v.begin(), v.end());
  }
  for (auto it : v)
    cout << setw(2) << it;
}
