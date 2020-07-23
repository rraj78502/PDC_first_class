#include<stdio.h>
#include<omp.h>
#include<time.h>
int main()
{
int i=0,j=0,k=0;
int a[2][2]={{1,2},{3,4}};
int b[2][2]={{1,2},{3,4}};
int c[2][2]={{0,0},{0,0}};
clock_t start_clock = clock();
#pragma omp parallel for
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
  for(k=0;k<2;k++)
  {
  c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
 }
}
clock_t end_clock = clock();
printf("\nProgram Execution Time : %ld ms\n\n",(end_clock-start_clock));
printf("Resultant Matrix\n");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
  printf("C[%d][%d]=%d\n",i,j,c[i][j]);
 }
}

return 0;
}
