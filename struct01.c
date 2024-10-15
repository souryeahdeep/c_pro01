#include<stdio.h>
#include<string.h>
struct struct01
    {
        int roll;
        float cgpa;
    };
int main(){
    struct struct01 deep;
    struct struct01 peep; 

    struct struct01 sheep;
    printf("Enter the Roll, CGPA of Deep");
    scanf("%d",&deep.roll);
    scanf("%f",&deep.cgpa);
    
    printf("Enter the Roll, CGPA of peep");
    scanf("%d\n",&peep.roll);
    scanf("%f\n",&peep.cgpa);

     printf("Enter the Roll, CGPA of Deep");
    scanf("%d\n",&sheep.roll);
    scanf("%f\n",&sheep.cgpa);



    printf("DEEP : %d %0.2f \n", deep.roll,deep.cgpa );
    printf("peep : %d %f \n", peep.roll,peep.cgpa );
    printf("sheep : %d %f \n", sheep.roll,sheep.cgpa );


    return 0;
}