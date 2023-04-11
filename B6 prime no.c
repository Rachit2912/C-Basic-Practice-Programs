/* 6.Check the given number is prime or not. */
#include<stdio.h>
char p(int n);
int main() {  printf("RJ \n");
int n;
printf("enter no");
scanf("%d",&n);
p(n);
return 0;
}

char p(int n) {
int i=2,r,f;
while (i<=(n/2)) {
    if ((n%i) != 0){
        i++ ;
        f=1;
    }
    else {
            f=0;
        printf("not prime no");
            break;
    }
}
if (f==1) {
    printf("prime no");
}

}
