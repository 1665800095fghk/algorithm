#include<bits/stdc++.h>

using namespace std;

const int N = 100010, M = (1 << 20) + 10;

int last[M], g[N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, x;
  cin >> n >> m >> x;
  for(int i = 1; i <= n; ++i) {
    int a;
    cin >> a;
    g[i] = max(g[i-1], last[a^x]);
    last[a] = i;
  }
  while(m--) {
    int l, r;
    cin >> l >> r;
    if(g[r] >= l) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
