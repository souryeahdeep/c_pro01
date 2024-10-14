#include<stdio.h>
void doWork(int a,int b, int *sum, int *prod, int *avg);
int main(){
    int a=5, b=6; 
    int sum; int prod; int avg;
    doWork(a,b,&sum,&prod,&avg);
    printf("Sum = %d\n, Product = %d\n, Average = %d\n",sum,prod,avg);
    return 0;
}
void doWork(int a,int b, int *sum, int *prod, int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}