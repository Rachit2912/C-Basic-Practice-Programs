/* 5.Check the given number is Armstrong or not. */
#include<stdio.h>
char a(int n);
int main() {int n;  printf("RJ \n");
    printf("enter no ");
    scanf("%d",&n);
a(n);
return 0;
}

char a(int n) {
    int r,num,s_c=0;
num=n;
while (n>0) {
    r=n%10;
    s_c+=r*r*r;
    n=n/10;
}
if (num==s_c) {
        printf("armstrong no.");
    }
else {
    printf("not armstrong no.");
}

}
