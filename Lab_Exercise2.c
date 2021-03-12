//a) Write a Program to Convert Celsius to Fahrenheit and Vice-Versa


#include<stdio.h>
#include<math.h>
int main()
{
    float fh,cl;
    char ch;
    printf("Press c to convert temperature from Fahrenheit to Celsius.\n");
    printf("Press f to convert temperature from Celsius to Fahrenheit.\n");
    printf("Enter your choice (c, f): ");  scanf("%c",&ch);
    if((ch =='c') ||(ch =='C'))
    {
        printf("Enter temperature in Fahrenheit: ");  scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",cl);
    }
    else if((ch =='f') ||(ch =='F'))
    {
        printf("Enter temperature in Celsius:");  scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fh);
    }
    else
    {
        printf("Invalid Choice !!!");
    }
    return 0;
} __________________________________________________________________________________________________

// b)Write a C program to Find Maximum of 3 numbers using Conditional Operator

int a,b,c,max; //here max gives us the Maximum of 3 numbers
printf("Enter the values of 3 Numbers\n");
printf("Enter 'a' value : ");  scanf("%i",&a);
printf("Enter 'b' value : ");  scanf("%i",&b);
printf("Enter 'c' value : ");  scanf("%i",&c);
max = (a>b)?((a>c)?a:c):((b>c)?b:c);
printf("The Maximum of Three numbers is %i",max);
