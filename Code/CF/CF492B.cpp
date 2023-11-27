#include <algorithm>
#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, l;
  cin >> n >> l;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  sort(v.begin(), v.end());
  vector<int> len(n + 1);
  len[0] = v[0] * 2;
  for (int i = 1; i < n; ++i)
    len[i] = v[i] - v[i - 1];
  len[n] = (l - v[n - 1]) * 2;
  int maxdist = *max_element(len.begin(), len.end());
  cout << setprecision(11) << fixed << maxdist / 2.0 << endl;
}