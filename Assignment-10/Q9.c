#include<conio.h>
#include<stdio.h>
int checkDigit(int,int);
int main(){
    int num,digit;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Enter digit");
    scanf("%d",&digit);
    if(checkDigit(num,digit)){
        printf("\nDigit available");
    }
    else
        printf("\nDigit not available");
    getch();
    return 0;
}

int checkDigit(int n, int d){
    int f=0;
    while(n){
        if(n%10==d){
            f=1;
            break;
        }
        n = n/10;

    }
    return f;
}