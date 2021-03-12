//a) Write a C program to Compute Perimeter and Area of a Rectangle

int l,b;//area,peri; these are optional
printf("enter the length 'l' :");
scanf("%i",&l);
printf("enter the breadth 'b' :");
scanf("%i",&b);
//area = l*b;   there are optional
//peri = 2*(l+b);
printf("the area of rectangle is %i\n",l*b);
printf("the perimeter of rectangle is %i",2*(l+b));

//b) Write a C program to Calclate Distance Between 2 points

//#include<math.h> must use this to import sqrt()
int x1,x2,y1,y2; float distance;
printf("enter x1 :");  scanf("%i",&x1);
printf("enter x2 :");  scanf("%i",&x2);
printf("enter y1 :");  scanf("%i",&y1);
printf("enter y2 :");  scanf("%i",&y2);
distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
printf("the distance between two points is %.2f",distance);
return 0;


//c) Write  a C program to Simulate 3 Laws of Motion


#include<stdio.h>
int main()
{
float force,mass,accl;
printf("enter mass n accelration :");  scanf("%f %f",&mass,&accl);
force=mass*accl;
printf("%.2f",force);
return 0;
}

