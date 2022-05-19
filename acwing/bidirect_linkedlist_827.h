#include "../header.h"

namespace acwing {
namespace topic827 {

/**
 * @brief 数组模拟双链表
 * https://www.acwing.com/problem/content/829/
 */

const int N = 1e6 + 10;
int idx, head, tail;
int e[N], l[N], r[N];

// 初始化
void init() {
  idx = 2;
  head = 0;
  tail = 1;
  l[1] = 0;
  r[0] = 1;
}

// 在第k个点右边插入一个元素x
// 在第k个点左边插入一个元素x，等价于 在k嘴边的元素的右边插入x，add(l[k], x) 即可
void add(int k, int x) {
  e[idx] = x;
  l[idx] = k;
  r[idx] = r[k];
  l[r[k]] = idx;
  r[k] = idx;
  idx++;
}

// 删除第k个点
void remove(int k) {
  r[l[k]] = r[k];
  l[r[k]] = l[k];
}

void solve() {

  std::ios::sync_with_stdio(false);

  init();
  int m;
  std::cin >> m;
  while (m--) {
    std::string op;
    std::cin >> op;
    int k, x;
    if (op == "R") { // 从尾部添加
      std::cin >> x;
      add(l[1], x);
    } else if (op == "L") { // 从头部添加
      std::cin >> x;
      add(0, x);
    } else if (op == "D") {
      std::cin >> k;
      remove(k + 1); // 因为1号是尾节点
    } else if (op == "IL") {
      std::cin >> k >> x;
      add(l[k + 1], x);
    } else {
      std::cin >> k >> x;
      add(k + 1, x);
    }
  }

  for (int i = r[0]; i != 1; i = r[i]) std::cout << e[i] << ' ';
  return;
}

}
}