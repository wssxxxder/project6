#include "Fibonacci.h"

int n_Fibonacci(int n)
{
     if(n==1||n==2)  return 1;
     else
     return n_Fibonacci(n-1)+n_Fibonacci(n-2);
}

