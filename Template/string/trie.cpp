#include "bits/stdc++.h"
using namespace std;
struct trie {
  int nex[100000][26], cnt;
  bool exist[100000]; // 该节点结尾的字符串是否存在

  void insert(char *s, int l) {
    int p = 0;
    for (int i = 0; i < l; i++) {
      int c = s[i] - 'a';
      if (!nex[p][c])
        nex[p][c] = ++cnt;
      p = nex[p][c];
    }
    exist[p] = 1;
  }

  bool find(char *s, int l) {
    int p = 0;
    for (int i = 0; i < l; ++i) {
      int c = s[i] - 'a';
      if (!nex[p][c])
        return false;
      p = nex[p][c];
    }
    return exist[p];
  }
};
