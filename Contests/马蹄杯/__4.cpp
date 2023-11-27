#include <bits/stdc++.h>
#define ll long long
using namespace std;

// 小码哥在花园里种植了一排花，一共
// n种。为了浇花方便，他发明了一个自动的浇花器，一共有两个喷头，左边喷头从左往右浇花，右边的喷头从右往左浇花。左边的喷头的浇花的速度是右侧的两倍（同一个花，左边的喷头花费的时间是右边的一半）。
// 假设两个喷头同时开始浇花，左边的从左侧开始，右边的从右侧开始，浇完一朵马上浇下一朵。
// 特别提示：
// （1）如果左边的喷头到达一朵花的时候，右边的喷头正好在喷，则左边的喷头不会去喷这朵花，左边的喷头什么也不会干，因为这个时候已经没有剩余的花了。
// （2）如果右边的喷头到达一朵花的时候，左边的喷头正好在喷，则右边的喷头不会去喷这朵花，右边的喷头什么也不会干，因为这个时候已经没有剩余的花了。
// （3）如果左边和右边的喷头同时到达同一朵花，则由左边的喷头喷这朵花，右边的喷头什么也不会干，因为这个时候已经没有剩余的花了。
// 小码哥想知道左侧的喷头最终浇了多少多花。

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;
  int l = 0, r = n - 1;
  bool lf = false, rf = false;
  while (l < r) {
    // if (v[l] - 2 < 0) {
    //   v[l]--;
    //   v[++l]--;
    //   lf = true;
    //   if (l == r) {
    //     cout << l + 1 << endl;
    //     return 0;
    //   }
    // } else {
    //   v[l] -= 2;
    //   if (v[l] == 0)
    //     l++, lf = true;
    //   if (l == r) {
    //     cout << l << endl;
    //     return 0;
    //   }
    // }

    v[l] -= 2;
    if (v[l] <= 0)
      l++, lf = true;
    if (l == r) {
      cout << l << endl;
      return 0;
    }

    v[r]--;
    if (v[r] <= 0)
      r--, rf = true;
    if (l == r) {
      cout << (lf && rf ? l + 1 : l) << endl;
      return 0;
    } 
  }
  cout << l << endl;
}