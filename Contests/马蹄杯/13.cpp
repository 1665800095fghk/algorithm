#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, x, y;
  cin >> n >> x;
  vector<int> a_x(x);
  for (auto &it : a_x)

    cin >> it;
  cin >> y;
  vector<int> a_y(y);
  for (auto &it : a_y)
    cin >> it;
  set<int> s;
  for (auto it : a_x)
    s.insert(it);
  for (auto it : a_y)
    s.insert(it);
  if (s.size() == n) {
    cout << "It Takes Two." << endl;
  } else {
    cout << "Maybe Next Time." << endl;
  }
}