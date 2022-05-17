#include "../header.h"

namespace acwing {
namespace topic796 {

const int N = 1010;
int s[N][N];
int sum[N][N];

void solve() {

  int n, m, q;
  std::cin >> n >> m >> q;

  // 初始化sum数组 有n+1行 m+1列 （数组本身初始化好了的）
  // for (int i = 0; i <= n; ++i) sum[i][0] = 0;
  // for (int j = 0; j <= m; ++j) sum[0][j] = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &s[i][j]);
      sum[i + 1][j + 1] = s[i][j] + sum[i][j+ 1] + sum[i + 1][j] - sum[i][j];
    }
  }

  // std::cout << "print" << std::endl;
  // for (int i = 0; i <= n; ++i) {
  //   for (int j = 0; j <= m; ++j) {
  //     std::cout << sum[i][j] << " ";
  //   }
  //   std::cout << std::endl;
  // }
  while (q--) {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << sum[x2][y2] + sum[x1 - 1][y1 - 1] - sum[x1 - 1][y2] - sum[x2][y1 - 1] << std::endl;
  }
  return;
}


}
}