#include<stdio.h>
#include<omp.h>
#include<time.h>
int main()
{
clock_t start_clock = clock();
int a = omp_get_num_threads();
printf("No of threads running : %d\n",a);
#pragma omp parallel
{
int b = omp_get_num_threads();
printf("No of threads running(inside parallel region) : %d\n",b);
}
clock_t end_clock = clock();
printf("\nProgram Execution Time : %ld ms\n\n",(end_clock-start_clock));
return 0;
}
