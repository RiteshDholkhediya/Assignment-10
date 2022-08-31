#include<conio.h>
#include<stdio.h>
void primeFactors(int);
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    primeFactors(num);
    getch();
    return 0;
}

void primeFactors(int n){
    int i=2;
    while(n!=1){
        while(n%i==0){
            printf("%d ",i);
            n=n/i;
        }
        i++;    
    }

}