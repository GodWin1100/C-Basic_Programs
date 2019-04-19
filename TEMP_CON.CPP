#include<stdio.h>
#include<conio.h>
//Celsius to Fahrenheit Conversion
void main()
{
clrscr();
float f,c;
printf("Enter Temperture in Celsius to convert it in Fahrenheit\n");
scanf("%f",&c);
f=c*1.8+32;
printf("\nTemperature in Fahrenheit is %.2f",f); //%.2f means it will show till 2 decimal places
getch();
}