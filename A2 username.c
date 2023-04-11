/* 2. Write a program to validate the user input and password
using string concepts */
#include<stdio.h>
#include<string.h>
int main()
{ printf("RJ \n");
char username[10],password[10];
//take inputs
printf("Enter the username: ");
gets(username);
printf("\nEnter the password: ");
gets(password);
//condition-first letter shouldn't be special symbol
int a=username[0],k=0,b=password[0];
if ((a>64 && a<91) || (a>96 && a<123)){
    k++ ;
}

if ((b>64 && b<91) || (b>96 && b<123)){
    k++ ;
}

//condition- username & password shouldn't be same and max. length is 8
if (k==2) {
if (strcmp(username,password) !=0 && strlen(username)<9 && strlen(password)<9 )
{printf("Username and password validated.");}

else{ printf("Username and password aren't validated.");}
}

else{ printf("Username and password aren't validated.");}


return 0;
}
