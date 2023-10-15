#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  char c;
  set<char> s;
  while (c = getchar(), c != '\n') {
    if (c >= 'a' && c <= 'z') {
      s.insert(c);
    }
  }
  cout << s.size();
}