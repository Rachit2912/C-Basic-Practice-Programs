//Write a C program to access array elements using Pointers.
#include<stdio.h>
int main() {
printf("Enter the value of nos. in array: \n");
int n;
scanf("%d",&n);
//defining array and pointer pointing on array
int arr[n];
int* p;
p=&arr;

//taking input in array from the help of pointers
for(int i=0;i<n;i++){
printf("The %d element in array is:",i+1);
scanf("%d",p+i);
}
printf("\n");

// printing the elements of array using pointers
for(int i=0;i<n;i++){
printf("The %d element in array is %d\n",i+1,*(p+i));
}
return 0;
}
