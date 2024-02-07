#include "bits/stdc++.h"

using namespace std;

void merge_sort(vector<int> &v, int l, int r) {
  if(l >= r) return;
  int mid = (l + r) >> 1;
  merge_sort(v, l, mid), merge_sort(v, mid + 1, r);
  vector<int> tmp(r - l + 1);
  int k = 0, i = l, j = mid + 1;
  while(i <= mid && j <= r)
    if(v[i] < v[j]) tmp[k++] = v[i++];
    else tmp[k++] = v[j++];
  while(i <= mid) tmp[k++] = v[i++];
  while(j <= r) tmp[k++] = v[j++];

  for(i = l, j = 0; i <= r; i++, j++) v[i] = tmp[j];
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto &it : v) cin >> it;
  merge_sort(v, 0, n - 1);
  for(auto it : v) cout << it << " ";
  cout << endl;
}
