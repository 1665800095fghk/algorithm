#include "bits/stdc++.h"
#include <vector>

using namespace std;

int LR(const vector<int> &v, int l, int r, int k) {
  while(l < r) {
    int mid = (l + r) >> 1;
    if(v[mid] >= k)  r = mid;
    else l = mid + 1;
  }
  return l;
}

int SR(const vector<int> &v, int l, int r, int k) {
  while(l < r) {
    int mid = (l + r + 1) >> 1;
    if(v[mid] <= k) l = mid;
    else r = mid - 1;
  }
  return l;
}

int main() {
  int n, q;
  cin  >> n >> q;
  vector<int> v(n);
  for(auto &it :  v) cin >> it;
  while(q--)  {
    int k;
    cin >> k;
    int lr = LR(v, 0, n - 1, k);
    if(v[lr] != k) {
      cout << "-1 -1" << endl;
      continue;
    } else {
      int sr = SR(v, lr, n - 1, k);
      cout << lr << " " << sr << endl;
    }
  }
}
