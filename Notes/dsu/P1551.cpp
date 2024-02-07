#include "bits/stdc++.h"

using namespace std;

int n, m, p;
int fa[5010];
void init() {
  for(int i = 1; i <= n; ++i) {
    fa[i] = i;
  }
}

int find(int x) {
  return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void merge(int a, int b) {
  fa[find(a)] = find(b);
}

int main() {
  cin >> n >> m >> p;
  init();
  for(int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    merge(a, b);
  }
  for(int i = 0; i < p; ++i) {
    int a, b;
    cin >> a >> b;

    if(find(a) == find(b)) {
      cout << "Yes" << endl;
    }else {
      cout << "No" << endl;
    }
  }
}
