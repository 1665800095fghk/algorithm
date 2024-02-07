#include<bits/stdc++.h>

using namespace std;

int get_sum(int num) {
  int res = 0;
  while(num != 0) {
    res += num % 10;
    num /= 10;
  }
  return res;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> v(n);
  for(int i = 1; i <= n; ++i) {
    v[i - 1].first = i;
    v[i - 1].second = get_sum(i);
  }
  sort(v.begin(), v.end(), [](pair<int, int> it_1, pair<int, int> it_2) {
      if(it_1.second < it_2.second) {
        return true;
      } else if(it_1.second == it_2.second) {
        return it_1.first < it_2.first;
      } else {
        return false;
      }
  });
  // for(auto it : v) cout << it.first << " ";
  cout << v[m - 1].first << endl;
}
