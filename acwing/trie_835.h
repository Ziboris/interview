#include "../header.h"

/**
 * @brief 字典树 trie
 * 
 */

namespace acwing {
namespace topic835 {

const int N = 1e5 + 10;

int idx; // 已经使用的节点的下标编号，没有对应的节点数组
int son[N][26];  // 节点n的儿子节点u的节点下标
int cnt[N]; // 以该下标的节点为重点的字符串一共有多少个

void insert(char str[]) {
  int p = 0; // 游标 从root = 0 开始； 0可以表示根节点也可以表示空节点
  for (int i = 0; str[i]; ++i) { // 字符串结尾是'\0' 可以用作boolean的判断
    int u = str[i] - 'a';
    if (!son[i][u]) son[p][u] = ++idx; // 第一个进循环的应该下标是1,0给的是root和空节点
    p = son[i][u]; // trie树构建的时候是链式追加
  }
  cnt[p]++;
}

// 查找字符串str出现的个数
int query(char str[]) {
  int p = 0;
  for (int i = 0; str[i]; ++i) {
    int u = str[i] - 'a';
    if (!son[p][u]) return 0;
    p = son[p][u];
  }
  return cnt[p];
}

void solve() {
  std::ios::sync_with_stdio(false);
  int n = 0;
  std::cin >> n;
  while (n --) {
    char op[2];
    char str[N];
    std::cin >> op >> str;
    if (op[0] == 'I') {
      insert(str);
    } else if (op[0] == 'Q') {
      std::cout << query(str) << std::endl;
    }
  }
  return;
}

}
}