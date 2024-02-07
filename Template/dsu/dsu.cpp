#include "bits/stdc++.h"
#include <vector>

using namespace std;

struct dsu {
  vector<int> pa;

  dsu(int size) {
    pa.resize(size + 1);
    for (int i = 1; i <= size; ++i)
      pa[i] = i;
  };

  // int find(int x) {
  //   if(pa[x] == x)
  //     return x;
  //   return find(pa[x]);
  // }
  int find(int x) {
    // if(pa[x] == x)
    //   return x;
    // pa[x] = find(pa[x]);
    // return pa[x];
    return pa[x] == x ? x : pa[x] = find(pa[x]);
  }

  void merge(int i, int j) { pa[find(i)] = find(j); }
};

int main() {}
