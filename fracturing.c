//********************************************************
// fracturing.c
// Author: Megan Milord
// Date: 09/08/24
// Class: COP 3223C, Professor Parra
// Purpose: This program prints a series of calculations
// for various functions.
// Input: Points for coordinates
//
// Output: Message stating calculations
// //********************************************************

#include<math.h>
#include<stdio.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc,char**argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
double calculateDistance(){
    double x1, x2, y1, y2;
    
    printf("Enter x values: \n");
    scanf("%lf %lf",&x1, &x2);
    printf("Enter y values: \n");
    scanf("%lf %lf",&y1 , &y2);
    
    double distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n",x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n",x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

double calculatePerimeter(){
   
    double distance = calculateDistance();
    double perimeter = distance * PI;

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 2.0;
}

double calculateArea(){
    double distance = calculateDistance();
    double radius = distance/2.0;
    double area = radius * radius * PI;

    printf("The area of the city encompassed by your request is %.2lf\n",area);

    return 2.0;
}

double calculateWidth(){
    double width = calculateDistance();

    printf("The width of the city encompassed by your request is %.2lf\n",width);

    return 1.0;
}

double calculateHeight(){
    double height = calculateDistance();
    
    printf("The height of the city encompassed by your request is %.2lf\n",height);

    return 1.0;
}