#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  ll n, m;
  cin >> n >> m;
  vector<ll> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  sort(v.begin(), v.end());
  ll maxdist = 0;
  for (int i = 1; i < n; i++)
    if (v[i] - v[i - 1] > maxdist)
      maxdist = v[i] - v[i - 1];
  printf("%.1f", max(double(maxdist) / 2, double(max(v[0] - 0, m - v[n - 1]))));
}