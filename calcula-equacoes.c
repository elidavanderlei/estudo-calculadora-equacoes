#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int A, B, C, DELTA, R1, R2,RQ;
  
  printf("Digite o valor da variavel A:");
  scanf("%d",&A);
  printf("Digite o valor da variavel B:");
  scanf("%d",&B);
  printf("Digite o valor da variavel C:");
  scanf("%d",&C);
  DELTA= B*B- 4*A*C;
  printf("DELTA:%d\n",DELTA);
  if(DELTA > 0)
  {
  RQ=sqrt(DELTA);
  R2= (B+RQ)/2*A;  
  printf("RAIZ:%d\n",R2);
  
  RQ=sqrt(DELTA);
  R1=(B-RQ)/2*A;
  printf("RAIZ:%d\n",R1);
}
else
{
  if(DELTA==0)
  {
    RQ=sqrt(DELTA);
    R1=(B-RQ)/2*A;
    printf("RAIZ:%d\n",R1); 
  }
else
{
  if(DELTA < 0)
  {
    printf("{ 0 }\n");  
  }
} 
} 
  system("Pause");
}