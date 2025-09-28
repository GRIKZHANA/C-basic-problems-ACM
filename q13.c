#include<Stdio.h>
int main(){
    double num,square,cube;
    printf("Enter a number:");
    scanf("%lf",&num);

    square = num*num;
    cube = num*num*num;

    printf("The square %2.lf is:%2.lf\n",num,square);
    printf("The cube of %2.lf is :%2.lf\n",num,cube);
    return 0;
}
