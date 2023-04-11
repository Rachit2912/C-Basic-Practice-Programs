/* 3. Write a program to remove all characters in a string except
alphabets. */
#include<stdio.h>
#include<string.h>
int main() { printf("RJ \n");
char sen[100],fil[100];
//input string
printf("enter string: ");
scanf("%s",&sen);
int k=0,i;
//checking for ASCII values of characters
for(i=0;(sen[i]) !='\0';i++) {
    int a=sen[i];
    if ((a>64 && a<91) || (a>96 && a<123)) {
            //adding it to new string
            fil[k]=sen[i];
            k++;
            }
}
fil[k]='\0';
puts(fil);
return 0;
}
