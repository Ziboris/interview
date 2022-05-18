#include "../header.h"

namespace acwing {
namespace topic826 {

/**
 * @brief 数组模拟链表的操作
 * 好处：快
 * 坏处：可能导致内存泄漏
 */

const int N = 1e6 + 10;
int e[N], ne[N];
int idx, head;

void init() {
  idx = 0;
  head = -1;
}

void add_to_head(int x) {
  e[idx] = x;
  ne[idx] = head;
  head = idx;
  idx++;
}

void add (int k, int x) {
  e[idx] = x;
  ne[idx] = ne[k];
  ne[k] = idx;
  idx++;
}

// 删除下标是k的节点的后面的一个节点
void remove(int k) {
  ne[k] = ne[ne[k]];
}

void solve() {
  init();
  int m;
  std::cin >> m;

  while (m--) {
    int k, x;
    char op;
    std::cin >> op;
    if (op == 'H') {
      scanf("%d", &x);
      add_to_head(x);
    } else if (op == 'D') {
      scanf("%d", &k);
      if (k == 0) head = ne[head];
      remove(k - 1);
    } else if (op == 'I') {
      scanf("%d%d", &k, &x);
      add(k - 1, x);
    }
  }

  int p = head;
  while (p != -1) {
    std::cout << e[p] << ' ';
    p = ne[p];
  }
}

}
}