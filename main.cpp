#include <cstdlib>

unsigned caller_a(unsigned *ptr);

int main() {
  unsigned *ptr = new unsigned[1];
  ptr[0] = 0;
  caller_a(ptr);
  delete[] ptr;
  return 0;
}
