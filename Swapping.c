#include<stdio.h>
main()
{
int a,b;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
//swapping without using temporary variable
printf("after swapping\n");
printf("a value is %d\n b value is %d",a,b);
return 0;
}
