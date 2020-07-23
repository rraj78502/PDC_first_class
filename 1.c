#include<stdio.h>
#include<omp.h>
#include<time.h>
int main()
{
float start = omp_get_wtime();
#pragma omp parallel
{
printf("Hello World\n");
}
float end = omp_get_wtime();

printf("\nProgram Execution Time : %lf ms\n\n",(end-start));
return 0;
}
