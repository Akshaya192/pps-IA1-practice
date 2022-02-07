#include<stdio.h>
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  printf("a is large\n");
  else if((b>c)&&(b>a))
  printf("b is large\n");
  else if((c>a)&&(c>b))
  printf("c is large");
}
int input()
{
  int a;
  printf("enter three numbers\n");
  scanf("%d",&a);
  return a;
}
void output(int large)
{
  printf("the largeest number is:%d",large);
}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  return 0;
}



