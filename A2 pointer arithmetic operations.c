//Write a C program for pointer arithmetic operations
#include<stdio.h>
int main(){
int number=50;
int *p;
p=&number;  //pointing the pointer
printf("Address of p variable is %u \n",p);
p=p+1; //incrementing by 1
printf("After increment: Address of p variable is %u \n",p);
p=&number;
p=p-1;  //decrementing by 1
printf("After decrement: Address of p variable is %u \n",p);
p=&number;
p=p+3;  //adding 3 means it'll add 12 more to the pointer
printf("After adding 3: Address of p variable is %u \n",p);
p=&number;
p=p-3;  //subtracting 3 means it'll subtract 12 from the pointer
printf("After subtracting 3: Address of p variable is %u \n",p);
return 0;
}
