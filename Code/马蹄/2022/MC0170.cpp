#include "bits/stdc++.h"
#include <cmath>
#include <vector>

using namespace std;

int n, k;

void solve() {
  vector<int> v;
  vector<int> res;
  for (int i = 1; i <= n; ++i)
    if (n % i == 0)
      v.push_back(i);
  for (auto it : v) {
    int sub = pow(it, k);
    if (n % sub == 0) {
      res.push_back(sub);
    }
  }
  if (res.size() == 1) {
    cout << "onlyone" << endl;
  } else {
    for (auto it : res) {
      cout << it << " ";
    }
    cout << endl;
  }
}

int main() {
  cin >> n >> k;
  solve();
}
