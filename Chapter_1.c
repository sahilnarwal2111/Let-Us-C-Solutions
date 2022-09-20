

// Chapter First of LUC
//que 1 LUC
// #include<stdio.h>
// int main()
// {
//     float bs, da, hr, gs;
//     printf("Enter the Ramesh's basic salary\n");
//     scanf("%f", &bs);
//      da = (bs * 40)/100;
//      hr = (bs * 20)/100;
//      gs = hr + da + bs;
//      printf("Gross salary = Rs.%f", gs);
//      return 0;
// }

// Que 2 LUC
// #include<stdio.h>
// int main()
// {
//     float dist, dist_metres, dist_inch, dist_feet, dist_cent;
//     printf("Enter the distance betwee two cities in km: ");
//     scanf("%f", &dist);
    
//     dist_metres = dist * 1000;
//     dist_cent = dist_metres * 100;
//     dist_feet = dist_metres * 3.28;
//     dist_inch = dist_feet * 12;
    
//     printf("\nMeters = %f", dist_metres);
//     printf("\nCentimetres = %f",dist_cent);
//     printf("\nFeet= %f", dist_feet);
//     printf("\nInch = %f", dist_inch);
//     return 0;
// }

// Que 3 LUC
// #include<stdio.h>
// int main()
// {
//     float a, b, c, d, e;
//     float aggragate_marks, percent;
//     printf("Enter the marks obtained in all five subjects\n");
//     scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//     aggragate_marks = a + b + c + d + e;
//     percent = aggragate_marks / 5;
//     printf("aggragate marks are %f.",aggragate_marks);
//     printf("Percentage obtained is %f.",percent);
//     return 0;
// }

// // Que 4 LUC
// #include<stdio.h>
// int main()
// {
//     float fahren, celsius;
//     printf("Enter the temp in fahrenheit");
//     scanf("%f", &fahren);
//     celsius = (fahren - 32) * 5/9;
//     printf("temp in celsius is %f", celsius);
//     return 0;
// }

// // Que 5 LUC
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float l, b, r;
//     float area_rectangle, perimeter;
//     float area_circle, circumference;
//     float a;
//     printf("Enter the value of length, breadth and radius\n");
//     scanf("%f%f%f",&l,&b,&r);
//     area_rectangle = l * b;
//     perimeter = 2 * ( l + b );
//     a = pow(2,r);
//     area_circle = 3.14 * a;
//     circumference = 2 * 3.14 * r;
//     printf("\nArea of circle is %f",area_circle);
//     printf("\nArea of Rectangle is %f",area_rectangle);
//     printf("\ncircumference of circle is %f",circumference);
//     printf("\nperimeter of Rectangle is %f",perimeter);
//     return 0;
// }

// // Que 6 LUC
// #include<stdio.h>
// int main()
// {
//     int c, d;
//     int a;
//     printf("Enter the value of c\n");
//     scanf("%d",&c);
//     printf("Enter the value of d\n");
//     scanf("%d",&d);
//     a = c;
//     c = (c + d) - c;
//     d = (a + d) - d;
//     printf("The value of c is %d\n", c);
//     printf("The value of d is %d\n", d);
//     return 0;
// }


// // Que 7 LUC
// //Profit = Selling price (S.P.) - Cost price (C.P.)
// #include<stdio.h>
// int main()
// {
//     float s, p, c;
//     printf("Enter the value of Total Selling price Rs. \n");
//     scanf("%f", &s);
//     printf("Enter the value of total profit earned Rs. \n");
//     scanf("%f", &p);
//     c = ( s - p ) / 15;
//     printf("The value of cost price of each item is Rs.%f", c);
//     return 0;
// }

// // Que 8 LUC
// #include<stdio.h> // 1189 x 841
// int main()
// {
    
//     int l0, l1, l2, l3, l4, l5, l6, l7, l8;
//     int b0, b1, b2, b3, b4, b5, b6, b7, b8;
//     l0 = 1189;
//     b0 = 841;
//     printf("The Dimensions of A0 = %d x %d\n", l0, b0);
//     if ( l0 > b0 )
//     {
//         l1 = l0 / 2;
//         b1 = b0;
//         printf("The Dimensions of A1 = %d x %d\n", l1, b1);
//     }
//     else
//     {
//         l1 = l0;
//         b1 = b0 / 2;
//         printf("The Dimesions of A1 = %d x %d\n", l1, b1);
        
//     }
//     if ( l1 > b1 )
//     {
//         l2 = l1 / 2;
//         b2 = b1;
//         printf("The Dimensions of A2 = %d x %d\n", l2, b2);
//     }
//     else
//     {
//         l2 = l1;
//         b2 = b1 / 2;
//         printf("The Dimensions of A2 = %d x %d\n", l2, b2);
//     }
//     if ( l2 > b2 )
//     {
//         l3 = l2 / 2;
//         b3 = b2;
//         printf("The Dimensions of A3 = %d x %d\n", l3, b3);
//     }
//     else
//     {
//         l3 = l2;
//         b3 = b2 / 2;
//         printf("The Dimensions of A3 = %d x %d\n", l3, b3);
//     }
//     if ( l3 > b3 )
//     {
//         l4 = l3 / 2;
//         b4 = b3;
//         printf("The Dimensions of A4 = %d x %d\n", l4, b4);
//     }
//     else
//     {
//         l4 = l3;
//         b4 = b3 / 2;
//         printf("The Dimensions of A4 = %d x %d\n", l4, b4);
//     }
//     if ( l4 > b4 )
//     {
//         l5 = l4 / 2;
//         b5 = b4;
//         printf("The Dimensions of A5 = %d x %d\n", l5, b5);
//     }
//     else
//     {
//         l5 = l4;
//         b5 = b4 / 2;
//         printf("The Dimensions of A5 = %d x %d\n", l5, b5);
//     }
//     if ( l5 > b5 )
//     {
//         l6 = l5 / 2;
//         b6 = b5;
//         printf("The Dimensions of A6 = %d x %d\n", l6, b6);
//     }
//     else
//     {
//         l6 = l5;
//         b6 = b5 / 2;
//         printf("The Dimensions of A6 = %d x %d\n", l6, b6);
//     }
//     if ( l6 > b6 )
//     {
//         l7 = l6 / 2;
//         b7 = b6;
//         printf("The Dimensions of A7 = %d x %d\n", l7, b7);
//     }
//     else
//     {
//         l7 = l6;
//         b7 = b6 / 2;
//         printf("The Dimensions of A7 = %d x %d\n", l7, b7);
//     }
//     if ( l7 > b7 )
//     {
//         l8 = l7 / 2;
//         b8 = b7;
//         printf("The Dimensions of A8 = %d x %d\n", l8, b8);
//     }
//     else
//     {
//         l8 = l7;
//         b8 = b7 / 2;
//         printf("The Dimensions of A8 = %d x %d\n", l8, b8);
//     }
    
//     return 0;
// }
//// Chapter First of LUC gets completed//  :) :) :) :)