
#include <stdio.h>
int main()
{
int a,last,rev=0;
  scanf("%d",&a);
  int n=a;
  while(a>0){
    last=a%10;
    rev=rev*10+last;
    a=a/10;}
  if(a==rev){
    printf("palindrome");
  }
  else{
    printf("not a palindrome");}
return 0;
}
