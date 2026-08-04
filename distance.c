#include <stdio.h>
int main()
{
float cm,inches,feet,x;
printf("Enter a Value:");
scanf("%f",&x);
cm=x/10;
inches=x/25.4;
feet=x/304.8;
printf("In Centimetre=%f\n",cm);
printf("In Inches=%f\n",inches);
printf("In Feet=%f\n",feet);
return 0;
}
