#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define FOO 10

#define ZOM 3.14

typedef struct Foo {
  int32_t x[FOO];
} Foo;

#define BAR L"hello world"

void root(Foo x);
