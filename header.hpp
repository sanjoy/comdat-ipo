#ifndef __HEADER_HPP
#define __HEADER_HPP

#include <cstdint>

struct IntegerPair;

bool always_false(unsigned);

inline unsigned __attribute__((noinline)) maybe_divide(unsigned *ptr) {
  unsigned val = 500 / ptr[0];
  if (always_false(val))
    return val;
  return (unsigned)((intptr_t)ptr);
}

#endif // __HEADER_HPP
