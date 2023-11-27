#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> sub(vector<int> A, vector<int> B) {
  
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  string a, b;
  vector<int> A, B;
  for (int i = a.size() - 1; i >= 0; i--)
    A.push_back(a[i] - '0');
  for (int i = b.size() - 1; i >= 0; i--)
    B.push_back(b[i] - '0');
  auto C = sub(A, B);
  for(int i = C.size() - 1; i >= 0; i--) cout << C[i];

}