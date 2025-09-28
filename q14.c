#include<stdio.h>
int main(){
    float area,base,height;
    printf("Enter the base of triangle:");
scanf("%f",&base);
printf("Enter the height of triangle:");
scanf("%f",&height);

 area=0.5*base*height;
 printf("The area of triangle is:%.2f\n",area);
return 0;
}