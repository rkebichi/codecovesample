#include<assert.h>
#include "lib.h"

int main() {
  assert(f1(5) == 2);
  assert(f2() == 2);
  assert(f1(20) == 21);
  assert(f1(21) != 21);
}
