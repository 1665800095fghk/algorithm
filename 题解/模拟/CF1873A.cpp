#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    map<string, bool> m = {
        {"abc", true}, {"bac", true}, {"acb", true}, {"cba", true}};
    string s;
    cin >> s;
    if (m[s] == true)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}