#include "../header.h"

namespace acwing {
namespace topic154 {

const int N = 1e6 + 10;
int a[N], q[N];
// q[i] 单调队列数组，存储的是满足条件的a数组的下标

/**
 * @brief https://www.acwing.com/problem/content/156/
 * 单调队列 滑动窗口
 */

void solve() {
  std::ios::sync_with_stdio(false);
  int n, k;
  std::cin >> n >> k;
  for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
  
  // 求滑动窗口内的最小值
  int hh = 0, tt = -1;
  for (int i = 0; i < n; ++i) {
    // 挪动窗口的左边界 (保留k - 1个)
    if (hh <= tt && q[hh] < i - k + 1) hh++;
    // 判定老白兔是不是该滚蛋了 （即便是相等的也需要滚蛋，因为新来的会更近，保持更久）
    while (hh <= tt && a[q[tt]] >= a[i]) tt--;
    // 新成员加入
    q[++tt] = i;
    // 业务判断
    if (i >= k - 1) std::cout << a[q[hh]] << ' ';
  }
  std::cout << std::endl;

  // 求滑动窗口内的最大值
  hh = 0, tt = -1;
  for (int i = 0; i < n; ++i) {
    if (hh <= tt && q[hh] < i - k + 1) hh++;
    while (hh <= tt && a[q[tt]] <= a[i]) tt--;
    q[++tt] = i;
    if (i >= k - 1) std::cout << a[q[hh]] << ' ';
  }
  std::cout << std::endl;
  return;
}

}
}