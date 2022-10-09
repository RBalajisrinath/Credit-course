#include<stdio.h>
 
int fact(int);
int main()
{
  int i,factorial,n;
 
  printf("Enter a number: ");
  scanf("%d",&n);
 
  factorial = fact(n);
  printf("\n%d",factorial);
 
  return 0;
}
 
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
