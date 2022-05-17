#pragma once

#include "../header.h"
#include <vector>

namespace acwing {
namespace topic791 {

std::vector<int> add(const std::vector<int>& a, const std::vector<int>& b) {
  std::vector<int> c;
  int t = 0; // 进位符
  for (size_t i = 0; i < a.size() || i < b.size(); ++i) {
    if (i < a.size()) t += a[i];
    if (i < b.size()) t += b[i];
    c.push_back(t % 10);
    t /= 10;
  }
  if (t) c.push_back(1);
  return c;
}

void solve(const std::string& str1, const std::string& str2) {
  // std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
  std::vector<int> a, b;

  for (int i = str1.size() - 1; i >= 0; --i) a.push_back(str1[i] - '0');
  for (int i = str2.size() - 1; i >= 0; --i) b.push_back(str2[i] - '0');

  auto c = add(a, b);

  std::stringstream ss;
  for (int i = c.size() - 1; i >= 0; --i) {
    ss << std::to_string(c[i]);
  }
  std::cout << ss.str() << std::endl;
  return;
}

}
}