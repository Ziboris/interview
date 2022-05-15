#include "../header.h"

const int TEMP_SIZE = 1000000;

namespace acwing{
namespace topic787 {

/**
 * @brief 归并排序
 * 
 * 1. 找到中间点
 * 2. 递归：归并左边+归并右边
 * 3. 将两个数组合二为一
 * 
 * 时间复杂度 O(nlogn)
 * 空间复杂度 n
 */

void merge_sort(int q[], int l, int r) {
  if (l >= r) return;
  
  int mid = (l + r) >> 1;
  merge_sort(q, l, mid), merge_sort(q, mid + 1, r);

  int i = l, j = mid + 1;
  int k = 0; // index of temp array
  int temp[TEMP_SIZE];
  while (i <= mid && j <= r) {
    if (q[i] <= q[j]) temp[k++] = q[i++];
    else temp[k++] = q[j++];
  }
  while (i <= mid) temp[k++] = q[i++];
  while (j <= r) temp[k++] = q[j++];

  for (int i = l, j = 0; i <= r; i++, j++) q[i] = temp[j];
}

void solve(int q[], int n) {
  merge_sort(q, 0, n - 1);
}

} // namespace topic787
} // namespace topicacwing
