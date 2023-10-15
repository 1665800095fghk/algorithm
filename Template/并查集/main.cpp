#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct dsu {
  vector<size_t> pa;
  explicit dsu(size_t size) : pa(size) { iota(pa.begin(), pa.end(), 0); }
};

int main() { std::ios::sync_with_stdio(false), cin.tie(0); }