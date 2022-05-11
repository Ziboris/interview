#include "../header.h"

namespace acwing {
namespace topic785 {

void quick_sort(int q[], int l, int r) {
  if (l >= r) return;
  int dummy = q[l];
  int i = l - 1;
  int j = r + 1;
  while (i < j) {
    do i++; while (q[i] < dummy);
    do j--; while (q[j] > dummy);
    if (i < j) std::swap(q[i], q[j]);
  }

  quick_sort(q, l, j);
  quick_sort(q, j + 1, r);
}

void solve(int q[], int n) {
  // int n = (sizeof(q) / sizeof(q[0]));
  quick_sort(q, 0, n - 1);
}

}
}