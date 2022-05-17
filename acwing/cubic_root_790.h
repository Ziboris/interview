#include "../header.h"

namespace acwing {
namespace topic790 {

void solve(double n) {
  double l = -10000.0, r = 10000.0;
  while (r - l > 1e-8) {
    double mid = (l + r) / 2;
    if (mid * mid * mid >= n) r = mid;
    else l = mid;
  }
  printf("%lf\n", l);
}

}
}