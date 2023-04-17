//Write a C program to store and display 10 student details using Array of structure.
#include<stdio.h>
#include <string.h>
//defining struct
struct student{
int rollno;
char name[10];
};
int main(){
int i;
//defining array of strctures
struct student st[10];
printf("Enter Records of 10 students\n");
//taking inputs for all the students
for(i=0;i<10;i++){
printf("Enter Rollno:");
scanf("%d",&st[i].rollno);
printf("Enter Name:");
scanf("%s",&st[i].name);
}

//printing the outputs for all the students
printf("\nStudent Information List:");
for(i=0;i<10;i++){
printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);
}
   return 0;
}




