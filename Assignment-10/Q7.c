#include<conio.h>
#include<stdio.h>
long int fact(int);
long int combination(int n, int r);

//formula = n!/(n-r)!r!  and c(n,r)= p(n,r)!/r!

int main(){
    int n,r;
    printf("Enter a number of items n");
    scanf("%d",&n);
    printf("Enter number of items you want to select from n means r");
    scanf("%d",&r);
    printf("Combination is %d",combination(n,r));
    getch();
    return 0;
}

long int combination(int n, int r){
   
   return fact(n)/(fact(n-r)*fact(r));
}

long int fact(int n){
    long int i,fact=1;;
    for(i=n;i>=1;i--)
        fact=fact*i;
    return fact;
}