#include<conio.h>
#include<stdio.h>
int fact(int);
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,fact(num));
    getch();
    return 0;
}

int fact(int n){
    int i,fact=1;;
    for(i=n;i>=1;i--)
        fact=fact*i;
    return fact;
}