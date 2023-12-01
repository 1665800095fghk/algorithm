#include "bits/stdc++.h"
#include <iterator>
#include <vector>

using namespace std;

int n;
vector<int> v;
vector<int> st;
vector<char> r;

void dfs(int x) {
  st[x] = 1;
  if (v[x] != 0) {
    int next = x + v[x];
    switch (st[next]) {
    // 未处理
    case 0:
      dfs(next);
      r[x] = r[next];
      break;
    // 处理中
    case 1:
      r[x] = 1;
      break;
    // 处理结束
    case 2:
      r[x] = r[next];
    }
  }
  st[x] = 2;
}

int main() {
  cin >> n;
  v.resize(n), st.resize(n);
  r.resize(n);
  for (auto &it : v)
    cin >> it;

  for (int i = 0; i < n; ++i) {
    if (!st[i])
      dfs(i);
  }
  for (auto it : r)
    cout << (it ? 'Y' : 'N');
  cout << endl;
}
