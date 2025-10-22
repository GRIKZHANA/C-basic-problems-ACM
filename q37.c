#include<stdio.h>
int main(){
    int num;
    printf("Enter which table you want to print:");
    scanf("%d",&num);
    printf("The multiplication table of %d is :\n",num);

    for(int i = 1; i <=10 ; i++){
        printf("%d * %d = %d\n",num,i,num*i);

    }
return 0;
}