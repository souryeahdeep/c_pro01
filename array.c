#include<stdio.h>

int main(){
    int arr[10];
    printf("Enter the Elements");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("I AM  = %d\n",arr[i]);
    }

}