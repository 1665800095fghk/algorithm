#include "bits/stdc++.h"

using namespace std;

const int M = 1e9 + 7;
const int B = 233;

typedef long long ll;

int get_hash(const string&s) {
  int res = 0;
  for(int i = 0; i < s.size(); ++i)
    res = ((ll)res * B + s[i] % M);
  return res;
}

int main() {
  string a, b;
  cin >> a >> b;
  cout << "A's hash: " << get_hash(a) << endl;
  cout << "B's hash: " << get_hash(b) << endl;
}
