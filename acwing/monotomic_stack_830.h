#include "../header.h"

namespace acwing {
namespace topic830 {

const int N = 1e6 + 10;
int idx;
int stk[N]; // 单调栈

// 单调栈本身无需使用到stack头文件
void solve() {

  idx = 0;

  int n;
  std::cin >> n;
  while (n --) {
    int x;
    scanf("%d", &x);
    while (idx && stk[idx] >= x) idx--;
    if (!idx) std::cout << "-1 ";
    else std::cout << stk[idx] << ' ';
    idx++;
    stk[idx] = x;
  }
  return;
}

}
}