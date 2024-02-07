#include "bits/stdc++.h"
#include <string>
#include <vector>
using namespace std;

vector<int> prefix_function(string s) {
  int n = (int)s.length();
  vector<int> res(n);
  for (int i = 1; i < n; ++i) {
    int j = res[i - 1];
    while (j > 0 && s[i] != s[j])
      j = res[j - 1];
    if (s[i] == s[j])
      j++;
    res[i] = j;
  }
  return res;
}

int main() {
  string s;
  cin >> s;
  auto res = prefix_function(s);
  int check = res[s.length() - 1];
  while (check) {
    string s3 = s.substr(0, check);
    string m = s.substr(check, s.length() - check*2);
    if(m.find(s3) != string::npos) {
      cout << s3 << endl;
      return 0;
    }
    check = res[check-1];
  }
  cout << "No" << endl;
}

