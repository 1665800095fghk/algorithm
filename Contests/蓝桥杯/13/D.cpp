#include "bits/stdc++.h"

using namespace std;

vector<long long> f_prev(vector<int> v) {
  vector<long long> res(v.size());
  res[0] = v[0];
  for(int i = 1; i < v.size(); ++i) 
    res[i] = res[i-1] + v[i];
  return res;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto &it : v) cin >> it;
  auto prev_vec = f_prev(v);
  long long res = 0;
  for(int i = 0; i < n; ++i) 
    res += (prev_vec[n - 1] - prev_vec[i]) * v[i];
  cout << res << endl;
}
