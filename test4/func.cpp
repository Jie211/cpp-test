#include "func.h"

template <typename T> T func(T a)
{
  return a+a;
}
template int func<int>(int);
template double func<double>(double);
