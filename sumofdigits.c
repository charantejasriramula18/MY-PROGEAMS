
#include <stdio.h>
int main()
{
int a,last,rev=0,sum=0;
  scanf("%d",&a);
  while(a>0){
    last=a%10;
sum=sum+last;
    a=a/10;}
  peintf("sum of the  number=%d",sum);
return 0;
}
