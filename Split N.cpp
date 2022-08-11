# problem link : https://www.codechef.com/submit/SPLITN

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, x, count;
  cin >> t;
  while (t--) {
    cin >> x;
    count = 0;
    if ((x & (x - 1)) == 0)
      cout << 0 << endl;
    else {

      int div, res;

      while ((x & (x - 1))) {
        div = 1;
        res = 1;
        while (res < x) {
          res = 1 << div;
          if (res > x)
            x -= (res >> 1);
          div++;
        }
        count++;
      }
      cout << count << endl;
    }
  }

  return 0;
}
