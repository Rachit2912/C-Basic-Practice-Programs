/* 3 .Reverse a sentence using recursion. */
#include<stdio.h>
void s_r();
int main() { printf("RJ \n");
printf("enter sentence: ");
s_r();
return 0;
}

void s_r() {
char s;
scanf("%c",&s);
if  (s != '\n') {
    s_r();
    printf("%c",s);
}

}






