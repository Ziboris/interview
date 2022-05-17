#include "../header.h"

// 算法基础班头文件
#include "quick_sort_785.h"
#include "number_k_786.h"
#include "merge_sort_787.h"
#include "number_range_789.h"
#include "cubic_root_790.h"
#include "big_integer_add_791.h"
#include "big_integer_subtract_792.h"
#include "big_integer_multiply_793.h"
#include "big_integer_devide_794.h"

// 算法提高班头文件

// leetcode究极班头文件


// ----------------------- 0.常数和全局变量定义 ------------------------
const int N = 1e6;
int n;
int m;
int q[N];
float f;
double d;
std::string str1, str2;

// ----------------------- 3.展示数据 ------------------------

void display_array_int() {
  for (int i = 0; i < n; ++i) {
    std::cout << q[i] << " ";
  }
  std::cout << std::endl;
}

void display() {
  std::cout << "display" << std::endl;
  display_array_int();
}

// ----------------------- 2.处理数据数据 ------------------------

void code() {
  // acwing::topic785::solve(q, n);
  // acwing::topic786::solve(q, n, m);
  // acwing::topic787::solve(q, n);
  // acwing::topic789::solve(q, n, m);
  // acwing::topic790::solve(d);
  // acwing::topic791::solve(str1, str2);
  acwing::topic792::solve(str1, str2);
}

// ----------------------- 1.读取数据 ------------------------

void init_array_int() {
  scanf("%d", &n);
  scanf("%d", &m);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &q[i]);
  }
}

void init_float_or_double() {
  // scanf("%f", &f);
  scanf("%lf", &d);
}

void init_string() {
  std::cin >> str1 >> str2;
}

void init() {
  // init_array_int();
  // init_float_or_double();
  init_string();
}

int main(void) {
  std::cout << "input" << std::endl;
  init();
  code();
  // display();
  return 0;
}