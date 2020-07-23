#include<stdio.h>
#include<omp.h>
#include<time.h>
int main()
{
int i=0;
clock_t start_clock = clock();
#pragma omp parallel for
for(i=0;i<10000;i++)
{
printf("Simple for loop :: iteration %d\n",i);
}
clock_t end_clock = clock();
printf("\nProgram Execution Time : %ld ms\n\n",(end_clock-start_clock));
return 0;
}
