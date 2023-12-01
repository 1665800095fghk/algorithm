#include "bits/stdc++.h"
#include <stack>

using namespace std;

struct boll {
  char color;
  int count;
};

int main() {
  int n, k;
  string str;
  cin >> n >> k;
  cin >> str;
  stack<boll> st;
  for (int i = 0; i < str.size(); ++i) {
    if (!st.empty() && str[i] == st.top().color) {
      if (st.top().count == k - 1)
        for (int j = 0; j < k - 1; j++)
          st.pop();
      else
        st.push({str[i], st.top().count + 1});
    } else {
      st.push({str[i], 1});
    }
  }

  if (st.size() == 0) {
    cout << ">_<" << endl;
  } else {
    stack<char> res;
    while (!st.empty())
      res.push(st.top().color), st.pop();
    while (!res.empty())
      cout << res.top(), res.pop();
  }
}
