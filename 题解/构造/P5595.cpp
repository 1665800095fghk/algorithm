#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s) {
  bool flag = false;
  for (auto &it : s) {
    if (it == 'Z') flag = true;
    if (flag && it != 'Z') return false;
  }
  return true;
}

int main() {
  string s;
  std::cin >> s;
  vector<int> x, y;
  if (!check(s)) {
    std::cout << -1 << std::endl;
    return 0;
  }
  for (auto &it : s) {
    if (it == 'X')
      x.push_back(1), y.push_back(0);
    else if (it == 'Y')
      x.push_back(0), y.push_back(1);
    else
      x.push_back(1), y.push_back(1);
  }
  for (auto &it : x) std::cout << it;
  std::cout << std::endl;
  for (auto &it : y) std::cout << it;
  std::cout << std::endl;
}