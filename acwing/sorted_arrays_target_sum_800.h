#include "../header.h"

namespace acwing {
namespace topic800 {

/**
 * @brief https://www.acwing.com/problem/content/802/
 * 
 */

int n, m;
const int N = 1e5 + 10;
int a[N], b[N];

void solve() {
  int t; // target sum
  std::cin >> n >> m >> t;
  for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
  for (int j = 0; j < m; ++j) scanf("%d", &b[j]);

  int j = m - 1, i = 0;
  for (; i < n && j >= 0; ++i) {
    while (a[i] + b[j] > t) {
      j--;
    }
    if (a[i] + b[j] == t) {
      std::cout << i << ' ' << j << std::endl;
      break;
    }
  }
  return;
}

}
}