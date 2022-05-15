#include "../header.h"

// 算法基础班
#include "quick_sort_785.h"
#include "number_k_786.h"
#include "merge_sort_787.h"

// 算法提高班

// leetcode究极班


// ----------------------- 0.常数和全局变量定义 ------------------------
const int N = 1e6;
int n;
int m;
int q[N];


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
  acwing::topic787::solve(q, n);
}

// ----------------------- 1.读取数据 ------------------------

void init_array_int() {
  scanf("%d", &n);
  // scanf("%d", &m);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &q[i]);
  }
}

void init() {
  init_array_int();
}

int main(void) {
  std::cout << "input" << std::endl;
  init();
  code();
  display();
  return 0;
}