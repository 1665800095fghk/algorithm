#include "bits/stdc++.h"
#include <iterator>
#include <string>
#include <vector>

using namespace std;

// 朴素前缀函数
vector<int> prefix_function_1(string s) {
  int n = (int)s.length();
  vector<int> pi(n);
  for (int i = 1; i < n; ++i) {
    for (int j = i; j >= 0; j--) {
      if (s.substr(0, j) == s.substr(i - j + 1, j)) {
        pi[i] = j;
        break;
      }
    }
  }
  return pi;
}

// 返回数组的后一位要么比前一位多1,要么减少,所有j可以直接从pi[i -1] + 1开始
vector<int> prefix_function_2(string s) {
  int n = (int)s.length();
  vector<int> pi(n);
  for (int i = 1; i < n; ++i) {
    for (int j = pi[i - 1] + 1; j >= 0; j--) {
      if (s.substr(0, j) == s.substr(i - j + 1, j)) {
        pi[i] = j;
        break;
      }
    }
  }
  return pi;
}

vector<int> prefix_function_3(string s) {
  int n = (int)s.length();
  vector<int> pi(n);
  for (int i = 1; i < n; ++i) {
    int j = pi[i - 1];
    while (j > 0 && s[i] != s[j])
      j = pi[j - 1];
    if (s[i] == s[j])
      j++;
    pi[i] = j;
  }
  return pi;
}

vector<int> find_cout(string str, string pattern) {
  string cur = pattern + '#' + str;
  int sz1 = str.size(), sz2 = pattern.size();
  vector<int> v;
  vector<int> lps = prefix_function_3(cur);
  for (int i = sz2 + 1; i <= sz1 + sz2; ++i) {
    if (lps[i] == sz2)
      v.push_back(i - 2 * sz2);
  }
  return v;
}
