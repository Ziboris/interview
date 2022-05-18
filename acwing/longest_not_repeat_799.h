#include "../header.h"

namespace acwing {
namespace topic799 {

const int N = 1e6 + 10;
int s[N];

void solve(int q[], int n) {
  int ans = 0;
  for (int i = 0, j = 0; i < n; ++i) {
    s[q[i]]++;
    while (j < i && s[q[i]] > 1) {
      s[q[j]] --;
      j++;
    }
    ans = std::max(ans, i - j + 1);
  }
  std::cout << ans << std::endl;
}

}
}