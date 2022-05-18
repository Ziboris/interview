#include "../header.h"

namespace acwing {
namespace topic2816 {

/**
 * @brief 判断str1 是否是 str2 的子序列
 * https://www.acwing.com/problem/content/2818/
 * 
 */

const int N = 1e6 + 10;
int a[N], b[N];
int n, m;

void solve() {
  std::cin >> n >> m;
  for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
  for (int j = 0; j < m; ++j) scanf("%d", &b[j]);

  int i = 0, j = 0;
  for (; i < n && j < m; ++j) {
    if(i < n&&a[i] == b[j])  i++;
  }
  std::cout << (i == n ? "Yes" : "No") << std::endl;
  return;
}

}
}