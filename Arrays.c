//Programs using Arrays: (UNIT 3)

// 1) Basic Array (>> takes Input and prints out what the user has entered!!)

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

// Multiplying 2 Matrices..

#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],c1,r1,c2,r2;   int i,j,k;
    printf("Enter col 1 :");  scanf("%i",&c1);      printf("Enter row 1 :");  scanf("%i",&r1);
    printf("Enter col 2 :");  scanf("%i",&c2);      printf("Enter row 2 :");  scanf("%i",&r2);
    for(i=0; i<r1; i++)  //to take input for a[10][10]
    {
        for(j=0; j<c1 ; j++)
        {
            printf("Enter value in a[%i][%i] :",i,j);   scanf("%d",&a[i][j]);  
        }
    }
    for(i=0; i<r2; i++) //to take input for b[10][10]
    {
        for(j=0; j<c2 ; j++)
        {
            printf("Enter value in b[%i][%i] :",i,j);   scanf("%d",&b[i][j]);  
        }
    }
    for(i=0; i<r1; i++)  //to take input for a[10][10]
    {
        for(j=0; j<c1 ; j++)
        {
            printf("%d\t",a[i][j]);   
        }
        printf("\n");
    }
    printf("_______________________________\n\n");
    for(i=0; i<r2; i++) //to take print for b[10][10]
    {
        for(j=0; j<c2 ; j++)
        {
            printf("%d\t",b[i][j]); 
        }
        printf("\n");
    }
    printf("_______________________________________\n\n");
    //to multiply both matrices...
    if (c1==r2)
    {
        for(i=0; i<c1; i++) //to take print for b[10][10]
    {
        for(j=0; j<r1 ; j++)
        {
            c[i][j] = 0;
            for(k=0; k<c1; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix Multiplication is not possible");
    }
}
