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
    // printing array
    for (i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    // sorting of array
    int j=0;int sarr[n];int t;
    for (i=0;i<n;i++){
        for (j=0;j<n-1;j++) {
            if (arr[j]>arr[j+1]){
                t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;t=0;
            }}}
// printing sorted array
for(i=0;i<n;i++){
    printf("\n%d",arr[i]);
}
    return 0;}
