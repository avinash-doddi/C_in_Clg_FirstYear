//Lab Exercises 3

// 1) Write a C program to find whether the given year is Leap Year or Not

/*Logic*/

int year;
printf("Enter the Year: ");  scanf("%i",&year);
if ((year%4 == 0 && year%100 == 0)&& year%400 == 0)
    printf("%i is a leap year",year);
else
    printf("%i is not a leap Year",year);


//_________________________________________________________________________________________________________________________________________________________________

// 2) Write a C program to find the Grade of student

/*logic*/

int marks;
printf("Enter the Marks :");  scanf("%i",&marks);
if (marks>=90)
   printf("Student secured 'A' Grade");
else if(marks<90 && marks>=80)
   printf("Student secured 'B' Grade");
else if(marks<80 && marks>=70)
   printf("Student secured 'C' Grade");
else if(marks<70 && marks>=60)
   printf("Student secured 'D' Grade");
else 
   printf("Student Failed");
   
   
//_________________________________________________________________________________________________________________________________________________________________


// 3)Write a menu driven program to calculate the area's of different Geomentrical Shapes

/*logic*/

int h,b,l,r,side;  char choice;  float area;
printf("Enter 'c' to calculate the area of Cirle\n");
printf("Enter 'r' to calculate the area of Rectangle\n");
printf("Enter 't' to calculate the area of Triangle\n");
printf("Enter 's' to calculate the area of Square :");
scanf("%c",&choice);
switch(choice)
{
  case 'c':
           printf("Enter the radius of Circle :");  scanf("%i",&r);
           area = 3.14*r*r;
           printf("The area of Cirlce is %.2f",area);
           break;
  case 'r':
           printf("Enter the length:");  scanf("%i",&l);
           printf("Enter the breadth :");  scanf("%i",&b);
           area = l*b;
           printf("The area of Rectangle is %.2f",area);
           break;
  case 't':
           printf("Enter the height:");  scanf("%i",&h);
           printf("Enter the base :");  scanf("%i",&b);
           area = 0.5*h*b;
           printf("The area of Triangle is %.2f",area);
           break;
  case 's':
           printf("Enter side of Square:");  scanf("%i",&side);
           area = side*side;
           printf("The area of Square is %.2f",area);
           break;
}


//_________________________________________________________________________________________________________________________________________________________________

/* THAT'S ALL FOR EXERCISE 3 FOLKS! */


