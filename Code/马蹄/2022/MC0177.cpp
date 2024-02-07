#include "bits/stdc++.h"
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> aa, bb;
  aa.push_back(a);
  bb.push_back(b);
  for (int i = n; i >= 1; --i) {
    if (i != a && i != b) {
      if (i > a && aa.size() < n / 2)
        aa.push_back(i);
      else if (i < b)
        bb.push_back(i);
    }
  }
  if (aa.size() == bb.size() && aa.size() == n / 2) {
    int min = *min_element(aa.begin(), aa.end());
    int max = *max_element(bb.begin(), bb.end());
    if (min == a && max == b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
