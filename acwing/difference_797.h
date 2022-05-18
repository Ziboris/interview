#include "../header.h"

namespace acwing {
namespace topic797 {

const int N = 1e6 + 10;
int b[N];
// 差分 + 前缀和数组下标都从1 开始

void insert(int l, int r, int c) {
  b[l] += c;
  b[r + 1] -= c;
}

void solve() {
  // 读取数据
  int n, m;
  int a[N];
  std::cin >> n >> m;
  for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);

  // 构造差分数组bn
  for (int i = 1; i <= n; ++i) insert(i, i, a[i]);

  while (m--) {
    int l, r, c;
    scanf("%d%d%d", &l, &r, &c);
    insert(l, r, c);
  }

  // 构造a[i]数组
  for (int i = 1; i <= n; ++i) {
    b[i] += b[i - 1];
    printf("%d ", b[i]);
  }

  return;
}

}
}
