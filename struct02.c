#include<stdio.h>
typedef struct address
{
    int houseno;
    int block;
    char city[100];
    char state[100];
}add;
 


int main(){
    
    add adds[2];
    for(int i=0;i<2;i++){
        printf("Enter the House NO. : ");
        scanf("%d",&adds[i].houseno);
        printf("Enter the Block. : ");
        scanf("%d",&adds[i].block);
        printf("Enter the City : ");
        scanf("%s",&adds[i].city);
        printf("Enter the State : ");
        scanf("%s",&adds[i].state);

    }
    for(int i=0;i<2;i++){
        printf("HOUSE NO : %d",adds[i].houseno);
        printf(" Block : %d",adds[i].block);
        printf(" City : %s",adds[i].city);
        printf(" State : %s",adds[i].state);
        printf("\n");
    }


    return 0;
}