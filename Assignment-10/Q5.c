#include<conio.h>
#include<stdio.h>
void printNOdd(int);
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printNOdd(num);
    getch();
    return 0;
}

void printNOdd(int n){
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",2*i-1);
    printf("\n");
}