#include "bits/stdc++.h"

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;
  while (q--) {
    int k;
    cin >> k;
    int l = 0, r = n - 1;
    while (l < r) {
      int mid = (l + r) >> 1;
      if (v[mid] >= k)
        r = mid;
      else
        l = mid + 1;
    }
    if (v[l] != k) {
      cout << "-1 -1" << endl;
      continue;
    } else {
      cout << l << " ";
      int i = l, j = r;
      while (i < j) {
        int mid = (i + j + 1) >> 1;
        if(v[mid] > k) j = mid;
        else i = mid + 1;
      }
      cout << i << endl;
    }
  }
}
