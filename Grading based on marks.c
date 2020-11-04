#include<stdio.h>
main()
{
int marks;
printf("enter marks");
scanf("%d",&marks);
if(marks>100)
printf("invalid marks");
else if(marks>=85)
printf("Grade A");
else if (marks>=70)
printf("Grade B");
else if(marks>=55)
printf("Grade C");
else if(marks>=40)
printf("Grade D");
else 
printf("Grade C");
return 0;
}
