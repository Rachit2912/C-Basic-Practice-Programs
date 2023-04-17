//Write a C program to add two complex numbers by passing structure to a function.
#include<stdio.h>
//defining struct
typedef struct Complex {
float r;
float i;
} complex ;

//declaring function
complex acn(complex a,complex b);

int main() {
complex a,b,res;
//taking inputs for no. 1:
printf("for no. 1");
printf("real part: ");
scanf("%f",&a.r);
printf("imaginary part: ");
scanf("%f",&a.i);

//taking inputs for no.2:
printf("for no.2 ");
printf("real part: ");
scanf("%f",&b.r);
printf("imaginary part: ");
scanf("%f",&b.i);

//calculating the sum:
res=acn(a,b);
//printing the result:
printf("Result is--> real: %f and complex: %f part",res.r,res.i);
return 0;
}

//defining the function
complex acn(complex a,complex b) {
    complex res;
    res.r=a.r+b.r;
    res.i=a.i+b.i;
    return (res);
}
