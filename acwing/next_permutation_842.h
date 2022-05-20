#include "../header.h"

namespace acwing {
namespace topic842 {

const int N = 100;
int n;
int path[N];
bool st[N];

void dfs(int index) {
  if (index == n) {
    for (int i = 0; i < n; ++i) std::cout << path[i] << ' ';
    std::cout << std::endl;
    return;
  }

  for (int i = 1; i <= n; ++i) {
    if (!st[i]) {
      path[index] = i;
      st[i] = true;
      dfs(index + 1);
      st[i] = false;
    }
  }
}

void builtin_func() {
  std::vector<int> vec;
  for (int i = 1; i <= n; ++i) vec.push_back(i);
  while(std::next_permutation(vec.begin(), vec.end())) {
    for (int i = 0; i < n; ++i) std::cout << vec[i] << ' ';
    std::cout << std::endl;
  }
  return;
}

void solve() {
  std::ios::sync_with_stdio(false);
  std::cin >> n;
  dfs(0);
  // builtin_func();
  return;
}

}
}