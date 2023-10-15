#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int x, y;
  cin >> x >> y;
  int d = 1;
  d = abs(x) + abs(y);
  if(!d) cout << 0;
  int res = 0;
  int sum = 0;
  for(int i = 0; i < d; ++i) 
    sum += 4 * i;
  if(x > 0 && y >= 0)
    cout << sum + x;
  else if(x >= 0 && y < 0)
    cout << sum + d - y;
  else if(x < 0 && y <= 0)
    cout << sum + 2 * d - x;
  else
    cout << sum + 3 * d + y;
    
}