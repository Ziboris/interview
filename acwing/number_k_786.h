#include "../header.h"

namespace acwing {
namespace topic786 {

void quick_sort(int q[], int l, int r) {
  if (l >= r) return;
  int pivot = q[r];
  int i = l - 1;
  int j = r + 1;
  while (i < j) {
    do i++; while (q[i] < pivot);
    do j--; while (q[j] > pivot);
    if (i < j) std::swap(q[i], q[j]);
  }

  quick_sort(q, l, i - 1);
  quick_sort(q, i, r);
}

/**
 * @brief 快速选择算法
 * 在快速排序算法的基础上
 * 
 * 时间复杂度 n + 1/2 n + 1/4 n + .... <= 2n 
 * 因此时间复杂度是O(n)
 * 
 * @param q 
 * @param n 
 * @param m 
 */

int quick_select(int q[], int l, int r, int k) {
  if (l >= r) return q[l];
  int pivot = q[l];
  int i = l - 1;
  int j = r + 1;
  while (i < j) {
    while (q[++i] < pivot);
    while (q[--j] > pivot);
    if (i < j) std::swap(q[i], q[j]);
  }
  int left_size = j - l + 1;
  return (k <= left_size ? quick_select(q, l, j, k) : quick_select(q, j + 1, r, k - left_size));
}

void solve(int q[], int n, int m) {
  // quick_sort(q, 0, n - 1);
  // std::cout << "display = " << q[m - 1] << std::endl;
  int num = quick_select(q, 0, n - 1, m);
  std::cout << "display = " << num << std::endl;
}

}
}