#include <stdio.h>
int main()
{
int h,m,s,sec;
printf("Enter time in seconds:");
scanf("%d",&sec);
h=sec/3600;
m=sec%3600/60;
s=sec%60;
printf("hours=%d",h);
printf("minutes=%d",m);
printf("seconds=%d",s);
return 0;
}
