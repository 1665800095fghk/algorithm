#include<bits/stdc++.h>

using namespace std;

int main() {
  char a, b;
  cin >> a >> b;
  b = b - '0';
  int width = 1189, height = 841;
  while(b--) {
    if(width > height) {
      width /= 2;
    } else {
      height /= 2;
    }
  }
  if(width > height) {
    cout << width << endl << height << endl;
  } else {
    cout << height << endl << width << endl;
  }
}
