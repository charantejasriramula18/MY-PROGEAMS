
#include <stdio.h>
int main()
{
int a,last,rev=0,product=1;
  scanf("%d",&a);
  while(a>0){
    last=a%10;
product=product*last;
    a=a/10;}
  printf("product of the  number=%d",sum);
return 0;
}
