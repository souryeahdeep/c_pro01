#include<stdio.h>
//Displays the address and the value of an array
int main(){
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   for (int i = 0; i < 10; i++)
   {
       printf("Address = %u, Value =  %d\n",&arr[i],arr[i]);
   }
   


  return 0;

}
