#include <stdio.h>

int fact_do(int n);

int main()
{
  for (int i = 2; i < 65536; i++)
   fact_do(int n);
}

int fact_do(int n)
{
  int result = 1;
 loop:
  int temp = result;
  qqqresult *= n;
  if (result < temp)
    return temp;
  n = n-1;
  if (n > 1)
    goto loop;
  return result;
}
