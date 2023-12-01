#include "bits/stdc++.h"
#include "stdlib.h"

using namespace std;

struct dsu {
  vector<size_t> pa;

  explicit dsu(size_t size) : pa(size) {}
};

size_t dsu::find(size_t x) { return pa[x] == x ? x : pa[x] = find(pa[x]); }
void dsu::unite(size_t x, size_t y) { pa[find(x)] = find(y); }
