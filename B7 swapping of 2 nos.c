/* 7. Swapping of two numbers using call by value. */
#include <stdio.h>
void swap(int , int);
int main()
{int a,b;  printf("RJ \n");
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("Before swapping, the values in main a = %d, b = %d\n",a,b);
    swap(a,b);
    printf("After swapping, values in main function  a = %d, b = %d\n",a,b);
}
void swap (int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("After swapping, values in swap function a = %d, b = %d\n",a,b);
}
