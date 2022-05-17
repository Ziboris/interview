#include "../header.h"

namespace acwing {
namespace topic789 {

/**
 * @brief 二分法
 * 
 * 有两个模板，区别是：计算mid的时候是否需要+1
 * 判断的依据是，选定一个check函数 判断要改变的边界是否是 l = mid
 * 如果是l = mid 那计算mid的时候就需要 + 1
 * 如果是r = mid ,那计算mid的时候就无需改动
 * 
 * @param q 
 * @param n 
 */

void solve(int q[], int n, int m) {
  while (m--) {
    int x;
    scanf("%d", &x);

    int l = 0, r = n - 1;
    while (l < r) {
      int mid = (l + r) / 2;
      if (q[mid] >= x) r = mid;
      else l = mid + 1;
    }
    // 此刻 l == r
    if (q[l] != x) std::cout << "-1 -1" << std::endl;
    else {
      std::cout << l << " ";
      int l = 0, r = n - 1;
      while (l < r) {
        int mid = (l + r + 1) / 2;
        if (q[mid] <= x) l = mid;
        else r = mid - 1;
      }
      std::cout << l << std::endl;
    }
  }
  return;
}

}
}