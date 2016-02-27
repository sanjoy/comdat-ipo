#include "header.hpp"

unsigned caller_b(unsigned *ptr) {
  ptr[0] = 10;
  unsigned k = maybe_divide(ptr);
  ptr[0] = 20;
  return k;
}
