#include <bits/stdc++.h>
#include <utility>

using namespace std;

void solve(vector<pair<int, int>> &segs) {
  vector<pair<int, int>> res;

  sort(segs.begin(), segs.end());

  int st = -2e9, ed = -2e9;
  for (auto seg : segs) {
    if (ed < seg.first) {
      if (st != -2e9)
        res.push_back({st, ed});
      st = seg.first, ed = seg.second;
    } else
      ed = max(ed, seg.second);
  }
  if (st != -2e9)
    res.push_back({st, ed});

  segs = res;
}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> segs(n);
  for (auto &it : segs)
    cin >> it.first >> it.second;

  solve(segs);

  cout << segs.size() << endl;
}
