/* 2. Sum of natural numbers using recursion. */
#include<stdio.h>
int s_2(int n);


int main(){ printf("RJ \n");
    int num;
printf("enter no upto which you want to add: ");
scanf("%d",&num);
s_2(num);
printf("%d",s_2(num));
return 0;
}
int s_2(int n) {
if (n!=0){
    return n+s_2(n-1);
}
    else{
        return 0;
    }
}
