#include "bits/stdc++.h"
#include <iterator>
#include <ostream>
#include <stack>

using namespace std;

int main() {
  int t, n;
  stack<int> st;
  string cmd;
  cin >> t;
  while (t--) {
    cin >> n;
    while (n--) {
      int num;
      cin >> cmd;
      if (cmd == "push") {
        cin >> num;
        st.push(num);
      } else if (cmd == "query") {
        if (st.empty()) {
          cout << "Anguei!" << endl;
        } else {
          cout << st.top() << endl;
        }
      } else if (cmd == "size") {
        cout << st.size() << endl;
      } else {
        if (st.empty()) {
          cout << "Empty" << endl;
        } else {
          cout << st.top() << endl;
          st.pop();
        }
      }
    }
  }
}
