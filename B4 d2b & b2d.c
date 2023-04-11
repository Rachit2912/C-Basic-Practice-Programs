/* 4.To convert binary number to decimal and vice versa. */
#include<stdio.h>
#include<math.h>
#include<string.h>
int d2b(int n),b2d(int n);
int main() { printf("RJ \n");
    int n; char d[10];
    printf("Choose the conversion D2B or B2D: ");
    gets(d);
    if (strcmp(d,"D2B") == 0) {
    printf("enter decimal no.") ;
    scanf("%d",&n);
d2b(n); }

else if (strcmp(d,"B2D")==0) {
    printf("enter binary no.");
    scanf("%d",&n);
    b2d(n); }
else {
    printf("inappropriate conversion");
}

    return 0;
}

int d2b(int n) {
int arr[10],q,r,i=0;
while (n!=0) {
q=n/2;
r=n%2;
n=n/2;
arr[i]=r;
i+=1;
}
for(i=i-1;i>-1;i--){
    printf("%d",arr[i]);
}
}

int b2d(int n) {
int r,b,fa=0,i=0;
while (n>0) {
r=n%10;
b=pow(2,i);
fa+=r*b;
i+=1;
n=n/10;
}
printf("%d",fa);
}
