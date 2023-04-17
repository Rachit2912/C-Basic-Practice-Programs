//Write a C program to find the maximum and minimum number in an array using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main() {
int n; //no. of elements in array
printf("enter the no. of elements: ");
scanf("%d",&n);
int *arr;   //making a pointer for array

//dynamic memory allocation for array
arr=(int *) malloc(n* sizeof(int));

//taking inputs for array
for(int i=0;i<n;i++){
    printf("enter the %d element of array: ",i+1);
    scanf("%d",arr+i);
}

//declaring 2 variables min and max
int max,min;
max=min=arr[0];
//checking for max and min number in array
for(int i=0;i<n;i++) {
    if(arr[i]>max){max=arr[i];}
    if(arr[i]<min){min=arr[i];}
}

//printing the max and min element in array
printf("Min element is %d and max element in array is %d",min,max);

//deallocating the memory which was reserved for the array
free(arr);
return 0;
}
