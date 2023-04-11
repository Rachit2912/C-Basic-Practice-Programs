/* 1. To find the factorial of a given number */
#include<stdio.h>
int fact(int n);
int main() { printf("RJ \n");
int num;
printf("enter your number: ");
scanf("%d",&num);
printf("%d",fact(num));
return 0;
}

int fact(int n) {
if (n!=0) {
    return n*fact(n-1);
}
else  {
    return 1;
}

}
