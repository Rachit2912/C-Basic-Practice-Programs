#include<stdio.h>
int main() {

// creating array
    int n,a=0,i=0;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        printf("enter %d element",i+1);
        scanf("%d",&a);
        arr[i]=a;}
/*
// printing array
    for (i=0;i<n;i++) {
        printf("%d",arr[i]);
    }

*/

// sorting of array
//getting max element and its index 
int ma=arr[0];int t,j=0,mai;
    for (i=0;i<n;i++) {
        if (arr[i]>ma) {
            ma=arr[i];
        }}
        for(j=0;j<n;j++){
    if (arr[j]==ma){
        mai=j;
    }}


// getting minimum of elements in array
int mi=arr[mai],sarr[n],k;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    if (arr[j]<mi && arr[j]>=0){
        mi=arr[j];
    
    }
}

// replacing already elements in sorted array with -1 
sarr[i]=mi;
    for(j=0;j<n;j++){
    if (arr[j]==mi){
        arr[j]=-1;
    }}
    mi=arr[mai];
}
    
// printing sorted array 
for(k=0;k<n;k++){
        printf("%d,",sarr[k]);
    }

    return 0;
    }