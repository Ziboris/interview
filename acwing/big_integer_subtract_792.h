#include "../header.h"

namespace acwing {
namespace topic792 {

/**
 * @brief 正整数减法
 * https://www.acwing.com/problem/content/794/
 * 
 * @param str1 
 * @param str2 
 * @return true 
 * @return false 
 */

// 判断str1 >= str2
bool Cmp(const std::string& str1, const std::string& str2) {
  if (str1.size() != str2.size()) return str1.size() > str2.size();
  // 这里两个string的长度相等
  for (int i = 0; i <= str1.size() - 1; ++i) {
    if (str1[i] != str2[i]) return str1[i] > str2[i];
  }
  return true;
}

std::vector<int> Sub(const std::vector<int>& a, const std::vector<int>& b) {
  std::vector<int> c;
  for (int i = 0, t = 0l; i < a.size(); ++i) {
    t = a[i] - t;
    if (i < b.size()) t -= b[i];
    c.push_back((t + 10) % 10);
    if (t < 0) t = 1;
    else t = 0;
  }

  while (c.size() > 1 && c.back() == 0) c.pop_back();
  return c;
}

void solve(const std::string& str1, const std::string& str2) {
  bool str1_bigger = Cmp(str1, str2);

  std::vector<int> a, b;
  for (int i = str1.size() - 1; i >= 0; --i) a.push_back(str1[i] - '0');
  for (int i = str2.size() - 1; i >= 0; --i) b.push_back(str2[i] - '0');

  auto c = (str1_bigger ? Sub(a, b) : Sub(b, a));

  std::stringstream ss;
  if (!str1_bigger) ss << '-';
  for (int i = c.size() - 1; i >= 0; --i) ss << std::to_string(c[i]);
  std::cout << ss.str() << std::endl;
  return;
}

}
}