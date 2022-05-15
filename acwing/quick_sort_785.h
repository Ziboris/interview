#include "../header.h"

namespace acwing {
namespace topic785 {

const int MAX_PAIR_SIZE = 1e6;

int count = 0;

/**
 * @brief 快速排序
 * 
 * 1. 找到一个标兵，可以是数组的左边、中间、右边或者随机的一个数
 * 2. 划分区域，使得前半部分的数 <= 标兵，并且后半部分的数 >= 标兵 (注意挪动之后标兵不一定在两个区间的中间)
 * 3. 递归两个子区域
 * 
 * 时间复杂度 O(nlogn)
 * 空间复杂度 logn（栈的数量）
 * 
 * 快速排序是不稳定的
 * 一个排序是否稳定项目工程没有实际意义
 * 如果要想一个快速排序是稳定的，可以把数组元素转化成一个二维元素，<p[i], i> i是对应元素的下表，这样每个二维元素都是唯一的，可以保证快速排序的稳定
 */

void quick_sort(int q[], int l, int r) {
  if (l >= r) return;
  int dummy = q[l];
  int i = l - 1;
  int j = r + 1;
  while (i < j) {
    do i++; while (q[i] < dummy);
    do j--; while (q[j] > dummy);
    if (i < j) {
      std::swap(q[i], q[j]);
      count++;
    }
  }

  quick_sort(q, l, j); // j变成了左区间的最右边的index
  quick_sort(q, j + 1, r); // j+1 是右区间最左边的index
}


// 稳定的快速排序
void stable_quick_sort(std::pair<int, int> p[], int l, int r) {
  if (l >= r) return;
  std::pair<int, int> pivot = p[l];

  int i = l - 1;
  int j = r + 1;
  while (i < j) {
    do i++; while (p[i].first < pivot.first && p[i].second > pivot.second);
  }
}

void solve(int q[], int n) {
  // origin
  count = 0;
  std::cout << "base quick sort:" << std::endl;
  quick_sort(q, 0, n - 1);
  std::cout << "count = " << count << std::endl;

  // stable
  // count = 0;
  // std::cout << "stable quick sort: " << std::endl;
  // std::pair<int, int> p_q[MAX_PAIR_SIZE];
  // for (int i = 0; i < n; ++ i) {
  //   p_q[i] = std::make_pair(q[i], i);
  // }
  // stable_quick_sort(p_q, 0, n - 1);
  // for(int i = 0; i < n; ++i) {
  //   q[i] = p_q[i].first;
  // }
  // std::cout << "count = " << count << std::endl;
}

}
}