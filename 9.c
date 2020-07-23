#include<stdio.h>
#include<omp.h>
#include<time.h>
int main()
{
int a=50;
int b=100;
int c=150;
clock_t start_clock = clock();
#pragma omp parallel
{
int id = omp_get_thread_num();
if(id==0)
{
if(a>b && a>c)
printf("Biggest number is %d\n",a);
else if(b>a && b>c)
printf("Biggest number is %d\n",b);
else
printf("Biggest number is %d\n",c);
}
else
{
if(a<b && a<c)
printf("Smallest number is %d\n",a);
else if(b<a && b<c)
printf("Smallest number is %d\n",b);
else
printf("Smallest number is %d\n",c);
}
}
clock_t end_clock = clock();
printf("\nProgram Execution Time : %ld ms\n\n",(end_clock-start_clock));
return 0;
}

