#include "../header.h"

const int TEMP_SIZE = 1e6 + 10;

namespace acwing {
namespace topic788 {

int merge_sort(int q[], int l, int r) {
  if (l >= r) return 0;
  int mid = (l + r) / 2;

  /*
  总共就三种情况：
  1. 逆序对的两个数都在左边  ----> count1
  2. 逆序对的两个数都在右边  ----> count2
  3. 逆序对的两个数一左一右  ----> count3
  最终的额结果 count1 + count2 + count3
  */
  int count1 = merge_sort(q, l, mid);  
  int count2 = merge_sort(q, mid + 1, r);
  int count3 = 0;
  int temp[TEMP_SIZE];
  int k = 0;
  int i = l, j = mid + 1;

  while (i <= mid && j <= r) {
    if (q[i] <= q[j]) temp[k++] = q[i++];
    else {
      count3 += (r - i + 1);
      temp[k++] = q[j++];
    }
  }
  while (i <= mid) {
    // count3 += (r - mid);
    temp[k++] = q[i++];
  }
  while (j <= mid) temp[k++] = q[j++];
  
  if (i = l, j = 0, i <= r; ++i, ++j) q[i] = temp[j];
}

int solve(int q[], int n) {
  return merge_sort(q, 0, n - 1);
}

}
}