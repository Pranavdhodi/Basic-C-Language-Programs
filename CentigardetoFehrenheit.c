#include <stdio.h>
int main()
{
int choice;
float c,f;
printf("MENU\n");
printf("1.Convert from C to F\n");
printf("2.Convert from F to C\n");
printf("Make a Choice:");
scanf("%d",&choice);
if (choice==1)
{
printf("Write the Temp in C:");
scanf("%f",&c);
f=c*(1.8)+32;
printf("The Temp in F is:%f",f);
}
else if (choice==2)
{
printf("Write the Temp in F:");
scanf("%f",&f);
c=(f-32)*(5.0/9.0);
printf("The Temp in C is:%f",c);
}
return 0;
}
