#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5,average;
    printf("Enter the marks of 5 subjects:");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

    average =(s1+s2+s3+s4+s5)/5;
    printf("The average marks of 5 subjects is :%f",average);
    return 0;
}