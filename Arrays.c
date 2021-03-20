//Programs using Arrays: (UNIT 3)

// 1) Basic Array ( >> takes Input and prints out what the user has entered!!)

#include<stdio.h>
int main()
{
 int a[50][50], num;
 printf("give the no.of inputs the arrays has to take (No more than 50) :");  scanf("%i",&num);
 /* program for taking in values in array a[] and printing them out:*/
 for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("Enter the value in a[%i][%i] : ",i,j);  scanf("%i",&a[i][j]);
    }
  printf("\n");
 }
 
  for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("%i\t",a[i][j]);
    }
  printf("\n");
 }
 
 getch();
 return 0;
} 

//_________________________________________________________________________________________________________________________________________________________________


// 2) Taking Input for 2 Arrays a[] and b[] and adding them both, where user can give the num --> no. of values to input in arrays.

#include<stdio.h>
int main()
{
 int a[50][50] , b[50][50], num;
 printf("give the no.of inputs the arrays has to take (No more than 50) :");  scanf("%i",&num);
 /* program for taking in values in array a[] and printing them out:*/
 for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("Enter the value in a[%i][%i] : ",i,j);  scanf("%i",&a[i][j]);
    }
  printf("\n");
 }
 
  for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("%i\t",a[i][j]);
    }
  printf("\n");
 }
 
 /*program for taking and printing values in array b[]*/
  for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("Enter the value in b[%i][%i] : ",i,j);  scanf("%i",&b[i][j]);
    }
  printf("\n");
 }
 
  for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("%i\t",b[i][j]);
    }
  printf("\n");
 }
 
 /*program for adding array a[] & b[] and printing them out */
 
 printf("\n");    printf("The sum of array a[] and b[] is :\n");
 
  for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
       
    printf("%i\t",a[i][j]+b[i][j]);
    }
  printf("\n");
 }
 
 getch(); //getch() is not required for Visual studio Code and other online Compilers..
 return 0;
}

//_________________________________________________________________________________________________________________________________________________________________

// 3) Write a Program to Transpose a array: ( Interchanges the values in Rows to Columns and Vice-versa ) 


#include<stdio.h>
int main()
{
int a[50][50], num;
printf("give the no.of inputs the arrays has to take (No more than 50) :"); scanf("%i",&num);
 
 /* program for taking in values in array a[] and printing them out:*/
 for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("Enter the value in a[%i][%i] : ",i,j);  scanf("%i",&a[i][j]);
    }
  printf("\n");
 }
 
  for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("%i\t",a[i][j]);
    }
  printf("\n");
 }

 // program to Print out the transposed Values..
printf("\n");  printf("The transverse of a[][] is : \n");
   for (int i = 0; i<num ; i++)
 {
   for (int j = 0; j<num ; j++)
    {
    printf("%i\t",a[j][i]);
    }
  printf("\n");
 }
getch(); //we seldom need this when runningg this code in IDE's.. 
return 0;
}


//_________________________________________________________________________________________________________________________________________________________________

/*Run this*/
print("\U0001F605")  //python though.. ;P
