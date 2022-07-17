#include <stdio.h>
#include <time.h>
double powern (double d, unsigned n)
{
  double x = 1.0;
  for (unsigned j = 1; j <= n; j++) x *= d;
  return x;
}

int main ()
{
  clock_t start, end;
  double cpu_time_used = 0;
  double sum = 0.0;
        
  for (unsigned j = 1; j < 101; j++)
  {
    start = clock();     
    for (unsigned i = 1; i < 1e7; i++) sum += powern (i, i % 5);
    end = clock();
    cpu_time_used += ((double) (end - start)) / CLOCKS_PER_SEC;
  } 
  printf ("sum = %15.10lf\ntime = %15.10lf\n", sum, cpu_time_used/100);

  return 0;
}
