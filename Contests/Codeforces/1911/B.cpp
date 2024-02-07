#include "bits/stdc++.h"

using namespace std;

int main() {
  int n;
  cin >> n;
  string str;
  cin >> str;
  int sum = 0;
  for(int i = 0; i + sum < n; ++i) {
    sum += i;
    cout << str[sum];
  }
}
