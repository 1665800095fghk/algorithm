#include "bits/stdc++.h"

using namespace std;

long long res = 0;

void merge_sort(vector<int> &v, int l, int r) {
  if (l >= r)
    return;

  int mid = (l + r) >> 1;
  merge_sort(v, l, mid), merge_sort(v, mid + 1, r);

  vector<int> tmp(r - l + 1);
  int i = l, j = mid + 1, k = 0;
  while (i <= mid && j <= r) {
    if(v[i] <= v[j])
      tmp[k++] = v[i++];
    else {
      res += (mid - i + 1);
      tmp[k++] = v[j++];
    }
  }
  while(i <= mid) tmp[k++] = v[i++];
  while(j <= r) tmp[k++] = v[j++];

  for(i = l, j = 0; i <= r; ++i, ++j) v[i] = tmp[j];
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto &it : v) cin >> it;
  merge_sort(v, 0, n - 1);
  cout << res << endl;
}
