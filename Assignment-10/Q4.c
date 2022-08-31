#include<conio.h>
#include<stdio.h>
void printN(int);
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printN(num);
    getch();
    return 0;
}

void printN(int n){
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
    printf("\n");
}