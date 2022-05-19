#include "../header.h"

namespace acwing {
namespace topic829 {

const int N = 1e6 + 10;
int q[N];
int head, tail;

void init() {
  head = 0;
  tail = 0; // tail > head 表示队列非空
}

void solve() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  init();
  while (n--) {
    std::string op;
    int x;
    std::cin >> op;
    if (op == "push") {
      std::cin >> x;
      q[tail++] = x;
    } else if (op == "pop") {
      head++;
    } else if (op == "empty") {
      if (head < tail) std::cout << "NO" << std::endl;
      else std::cout << "YES" << std::endl;
    } else if (op == "query") {
      std::cout << q[head] << std::endl;
    }
  }
  return;
}

}
}