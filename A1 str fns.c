/*  1.Write a program implementing the below string functions
String copy, String length, string compare, String reverse
String concatenation, String lowercase and upper case  */
#include<stdio.h>
#include<string.h>
int main() {
printf("RJ \n");
char sen[]="Good",comp[]="Bad";
printf("Normal string is %s\n",sen);
char copy[10];
strcpy(copy,sen);
printf("Copied string is %s\n",copy);
printf("The length of string is %d\n",strlen(copy));
printf("one string is %s and other string is %s\n",sen,comp);
if (strcmp(sen,comp)==0) {
    printf("Both strings are same\n");
    }
else {
    printf("Both strings are different\n ");
}
printf("the normal string is %s\n",sen);
printf("the reversed string is %s\n",strrev(sen));
char str1[]="Hello",str2[]="Ma'am";
printf("string 1 is %s\n",str1);
printf("string 2 is %s\n",str2);
printf("concatenated string is %s\n",strcat(str1,str2));
printf("normal string is  %s\n",sen);
printf("lowered string is %s\n",strlwr(sen));
printf("uppered string is %s\n",strupr(sen));
return 0;
}

