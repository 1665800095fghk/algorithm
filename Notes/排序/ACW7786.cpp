#include <bits/stdc++.h>
#define ll long long
using namespace std;

int k;

int quick_sort(vector<int> &v, int l, int r) {
  if (l >= r)
    return -1;
  int x = v[l], i = l - 1, j = r + 1;
  while (i < j) {
    do
      i++;
    while (v[i] < x);
    do
      j--;
    while (v[j] > x);
    if (i < j)
      swap(v[i], v[j]);
  }
  if (k <= j)
    quick_sort(v, l, j);
  if (k > j)
    quick_sort(v, j + 1, r);
  return v[k];
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n >> k;
  k--;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  cout << quick_sort(v, 0, n - 1) << endl;
}