#include "bits/stdc++.h"
#include <algorithm>
#include <cinttypes>
#include <cmath>
#include <sstream>
#include <string>
#include <system_error>
#include <unordered_map>
#include <vector>

using namespace std;

// 记录旋转一次
const unordered_map<char, char> mark = {
    {'>', 'v'}, {'v', '<'}, {'<', '^'}, {'^', '>'}};

// 顺时针旋转一次
vector<string> rotate(vector<string> matrex) {
  int n = int(matrex.size());
  for (auto &row : matrex) {
    for (auto &col : row) {
      col = mark.at(col);
    }
  }

  for (int i = 0; i < n / 2; ++i) {
    swap(matrex[i], matrex[n - i - 1]);
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i; ++j) {
      swap(matrex[i][j], matrex[j][i]);
    }
  }

  return matrex;
}

unordered_map<int, vector<string>> hashmap;

// 递归求解 n 阶迷宫
vector<string> dfs(int n) {
  // 0 阶为 >
  if (n == 0) {
    return vector<string>{{'>'}};
  }
  // 如果求解过 n 阶解则直接返回
  if (hashmap.find(n) != hashmap.end()) {
    return hashmap[n];
  }
  // 求解 a b c d 四个区域
  vector<string> a = dfs(n - 1);
  vector<string> b = rotate(a);
  vector<string> c = rotate(b);
  vector<string> d = rotate(c);
  // a c
  // b d
  // 拼接答案，然后返回
  int size = (int)a.size();
  vector<string> result(size * 2);
  for (int i = 0; i < size; ++i) {
    result[i] = a[i] + c[i];
    result[i + size] = b[i] + d[i];
  }
  // 存储 n 阶解
  hashmap[n] = result;
  return result;
}

int main() {
  ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int n;
  cin >> n;
  vector<string> res = dfs(n);
  for (auto row : res)
    cout << row << endl;
}
