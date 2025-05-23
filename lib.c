#include "lib.h"

int f1(int a) {
  if(a > 10) {
    return a + 1;
  } else {
    return 2;
  }
}

int f2() {
  int a = 1;
  a++;
  return a;
}

int f3() {
  int a = 100;
  a--;
  return a;
}
