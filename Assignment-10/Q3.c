#include<conio.h>
#include<stdio.h>
int isEven(int);
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(isEven(num))
        printf("%d is even number",num);
    else
        printf("%d is odd number",num);

    getch();
    return 0;
}

int isEven(int n){
    if(n%2)
        return 0;
    return 1;
}