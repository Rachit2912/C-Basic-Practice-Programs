//Write a C program to access the members of a structure using pointers. You can create a Employee structure and access the details using pointers.
#include<stdio.h>
//making a struct
typedef struct {
char name[10];
int age;
float salary;
} emp;

int main() {
//input for no. of employees
int n;
printf("enter no. of employees: ");
scanf("%d",&n);

//making array of strctures
emp list[n];
//making a pointer pointed to array
emp *ptr=list;

//taking inputs for all the 'n' employees
for(int i=0;i<n;i++){
    printf("enter name of employee %d: ",i+1);
    scanf("%s",(ptr+i)->name);
    printf("enter age of employee %d: ",i+1);
    scanf("%d",&(ptr+i)->age);
    printf("enter salary of employee %d: ",i+1);
    scanf("%f",&(ptr+i)->salary);
}

//printing outputs for all the 'n' employees
for(int i=0;i<n;i++){
        printf("for employee %d\n",i+1);
    printf("name is %s \n",(ptr+i)->name);
    printf("age is %d \n",(ptr+i)->age);
    printf("salary is %d \n",(ptr+i)->salary);
}

return 0;
}
