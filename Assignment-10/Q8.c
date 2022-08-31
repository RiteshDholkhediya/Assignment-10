#include<conio.h>
#include<stdio.h>
 int fact(int);
  int permutation(int n, int r);

//formula = n!/(n-r)!r!  and c(n,r)= p(n,r)!/r!

int main(){
    int n,r;
    printf("Enter value of n ");
    scanf("%d",&n);
    printf("Enter value of r ");
    scanf("%d",&r);
    printf("Permutation is %d",permutation(n,r));
    getch();
    return 0;
}

 int permutation(int n, int r){
   
   return fact(n)/fact(n-r);
}

 int fact(int n){
    int i,fact=1;;
    for(i=n;i>=1;i--)
        fact=fact*i;
    return fact;
}