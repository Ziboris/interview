#include "../header.h"

const int N = 100010, M = 3e6 + 10;

int n;
int son[M][2];
int idx;
int a[N]; //  原始数组

void insert(int x) {
  int p = 0;
  for (int i = 30; i >= 0; i --) {
    // int &s
  }
}

int query(int x) {
  return 0;
}

int main (void) {
  std::ios::sync_with_stdio(false);
  std::cin >> n;

  // 创建索引
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
    insert(a[i]);
  }

  // 遍历查询
  int res = 0;
  for (int i = 0; i < n; ++i) res = std::max(res, query(a[i]));
  std::cout << res << std::endl;

  return 0;
}