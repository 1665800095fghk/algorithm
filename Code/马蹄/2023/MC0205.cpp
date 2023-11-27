#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  string str;
  cin >> str;
  char max = ' ';
  for (auto ch : str) {
    if (ch > max) {
      max = ch;
    }
  }
  cout << max << endl;
}