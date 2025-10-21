#include<stdio.h>
int main(){
    int marks ;
    char grade;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if (marks>=90){
     grade ='A';
}
    else if (marks>=75)
    {
    grade ='B';
    }
    else if (marks>=60){
    grade ='C';
}
    else {
    grade ='D';
}
    printf("your grade is %c",grade);
    return 0;

}