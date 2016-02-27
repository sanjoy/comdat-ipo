#include "header.hpp"

bool always_false(unsigned) { return false; }

unsigned caller_a(unsigned *ptr) {
  ptr[0] = 10;
  unsigned k = maybe_divide(ptr);
  ptr[0] = 20;
  return k;
}
