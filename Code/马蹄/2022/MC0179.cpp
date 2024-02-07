#include "bits/stdc++.h"
#include <algorithm>

using namespace std;

struct Point {
  double x{}, y{};
  Point() = default;
  Point(double x, double y) : x(x), y(y){};

  bool operator<(Point rhs) {
    if (x != rhs.x)
      return x < rhs.x;
    return y > rhs.y;
  }
  Point getMidPoint(Point o) { return {(x + o.x) / 2, (y + o.y) / 2}; }
};

struct Line {
  int A, B, C;
  bool check(Point a) {
    if (A * a.x + B * a.y + C == 0)
      return true;
    return false;
  }

  bool T(Line rhs) { return (A * rhs.A + B * rhs.B) == 0; }
};

int main() {
  vector<Point> v(4);
  Line e1, e2;
  for (auto &it : v)
    cin >> it.x >> it.y;
  cin >> e1.A >> e1.B >> e1.C;
  cin >> e2.A >> e2.B >> e2.C;

  bool flag_1 = e1.T(e2);

  sort(v.begin(), v.end());

  auto mid = v[0].getMidPoint(v[3]);

  bool flag_2 = e1.check(mid) && e2.check(mid);

  if (flag_1 && flag_2) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}
