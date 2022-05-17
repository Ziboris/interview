#include "../header.h"

namespace acwing {
namespace topic795 {

/**
 * @brief https://www.acwing.com/problem/content/797/
 * 
 * @param q 
 * @param n 
 * @param m 
 */

void solve(int q[], int n, int m) {
  std::vector<int> sum;
  int temp_sum = 0;
  for (int i = 0; i < n; ++i) {
    temp_sum += q[i];
    sum.push_back(temp_sum);
  }
  while (m--) {
    int l, r;
    scanf("%d", &l);
    scanf("%d", &r);
    std::cout << sum[r - 1] - sum[l - 2] << std::endl;
  }
  return;
}

}
}