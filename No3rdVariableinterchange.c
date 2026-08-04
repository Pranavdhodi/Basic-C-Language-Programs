#include <stdio.h>
int main()
{
int a=10,b=3;
printf("Before Swap:a=%d\n",a);
printf("Before Swap:b=%d\n",b);
a=a+b;
b=a-b;
a=a-b;
printf("After Swap:a=%d\n",a);
printf("After Swap:b=%d\n",b);
return 0;
}

