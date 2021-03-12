//as usual, any programming language starts off with our Fav. Hello, World
printf("Hello, World");

//addition of 2 numbers
int a,b;
printf("Enter the value of 'a' :");
scanf("%i\n",&a);
printf("Enter the value of 'b' :");
scanf("%i\n",&b);
printf("the sum of 'a' and 'b' is : %i",a+b);//same follows for - , *, / and %(mod)


//swapping of 2 numbers

     //with using temp variable
     int a,b,temp;
     printf("Enter the value of 'a' :");
     scanf("%i",&a);
     printf("Enter the value of 'b' :");
     scanf("%i",&b);
     b = temp;
     b = a;
     a = temp;
     printf("the values of 'a' is %i and 'b' is %i",a,b);
     
     //without using a temporoary variable
     int a,b,temp;
     printf("Enter the value of 'a' :");
     scanf("%i",&a);
     printf("Enter the value of 'b' :");
     scanf("%i",&b);
     a = a+b;
     b = a-b;
     a = a-b;
     printf("the values of 'a' is %i and 'b' is %i",a,b);
     

