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
#include "prefix_sum_795.h"
#include "prefix_metrix_sum_796.h"
#include "difference_797.h"
#include "difference_merix_798.h"
#include "longest_not_repeat_799.h"
#include "sorted_arrays_target_sum_800.h"
#include "sub_sequence_2816.h"

#include "linkedlist_operation_826.h"
#include "bidirect_linkedlist_827.h"
#include "array_simulation_stack_828.h"
#include "array_simulation_queue_829.h"
#include "monotomic_stack_830.h"
#include "sliding_window_154.h"
#include "trie_835.h"
#include "next_permutation_842.h"

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
  // acwing::topic792::solve(str1, str2);
  // acwing::topic795::solve(q, n, m);
  // acwing::topic796::solve();
  // acwing::topic797::solve();
  // acwing::topic798::solve();
  // acwing::topic799::solve(q, n);
  // acwing::topic800::solve();
  // acwing::topic2816::solve();

  // acwing::topic826::solve();
  // acwing::topic827::solve();
  // acwing::topic829::solve();
  // acwing::topic830::solve();
  // acwing::topic154::solve();
  // acwing::topic835::solve();
  acwing::topic842::solve();
}

// ----------------------- 1.读取数据 ------------------------

void init_array_int() {
  scanf("%d", &n);
  // scanf("%d", &m);
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
  init_array_int();
  // init_float_or_double();
  // init_string();
}

int main(void) {
  std::cout << "input" << std::endl;
  // init();
  code();
  // display();
  return 0;
}