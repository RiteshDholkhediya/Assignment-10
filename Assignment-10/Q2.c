#include<stdio.h>
#include<conio.h>
float simple_interest(int,float,int);
int main(){
    int p,t;
    float r,si;
    printf("Enter principal amount");
    scanf("%d",&p);
    printf("Enter interest rate");
    scanf("%f",&r);
    printf("Enter time period");
    scanf("%d",&t);
    si = simple_interest(p,r,t);
    printf("Simple interest is %f",si);
    getch();

}

float simple_interest(int principal ,float rate, int time){
    return (principal*rate*time)/100;
}