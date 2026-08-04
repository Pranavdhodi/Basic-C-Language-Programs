#include <stdio.h>
#include <math.h>
int main()
{
float x1,y1,x2,y2,d;
printf("Enter x1:\n");
scanf("%f",&x1);
printf("Enter y1:\n");
scanf("%f",&y1);
printf("Enter x2:\n");
scanf("%f",&x2);
printf("Enter y2:\n");
scanf("%f",&y2);
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("The Distance b/w Two Points is:%f",d);
return 0;
}

