#include "bits/stdc++.h"

using namespace std;

int main() {
  string keymap;
  cin >> keymap;
  int t;
  cin >> t;
  map<char, int> res;
  for (auto it : keymap)
    res[it] = 0;
  while (t--) {
    int l, r;
    cin >> l >> r;
    for (int i = l - 1; i < r; i++)
      res[keymap[i]]++;
  }
  for (auto it : res)
    cout << it.second << " ";
}
