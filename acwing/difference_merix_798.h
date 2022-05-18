#include "../header.h"

namespace acwing {
namespace topic798 {

/**
 * @brief https://www.acwing.com/problem/content/800/
 * 差分矩阵
 */

const int N = 1010;
int a[N][N]; // 原矩阵
int b[N][N]; // 差分矩阵
int n, m, q;

void insert(int x1, int y1, int x2, int y2, int num) {
  b[x1][y1] += num;
  b[x2 + 1][y2 + 1] += num;
  b[x2 + 1][y1] -=num;
  b[x1][y2 + 1] -=num;
}

void print(int n, int m) {
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      std::cout << a[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void solve() {
  std::cin >> n >> m >> q;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      scanf("%d", &a[i][j]);
      insert(i, j, i, j, a[i][j]);
    }
  }
  
  // print(n, m);

  while (q--) {
    int x1, y1, x2, y2, num;
    scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &num);
    insert(x1, y1, x2, y2, num);
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m ; ++j) {
      a[i][j] = a[i - 1][j] + a[i][j - 1] + b[i][j] - a[i - 1][j - 1];
      std::cout << a[i][j] << ' ';
    }
    std::cout << std::endl;
  }    
  return;
}

}
}

