#include<stdio.h>
#include<conio.h>
float area(int);

int main(){
    printf("Area of circle is %f", area(3));
}

float area(int r){
    float area;
    area = 3.14*r*r;
    return area;
}