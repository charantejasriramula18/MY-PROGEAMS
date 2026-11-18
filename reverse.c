
#include <stdio.h>
int main()
{
int a,last,rev=0;
  scanf("%d",&a);
  while(a>0){
    last=a%10;
    rev=rev*10+last;
    a=a/10;}
  peintf("reversed number=%d",rev);
return 0;
}
