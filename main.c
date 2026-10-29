#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){
    int i, average;
    int sum=0;
    int grade[SIZE];

    for (i=0;i<SIZE;i++){
        printf("input grade:");
        scanf("%d",&grade[i]);
        sum+=grade[i];
    }

    average=sum/SIZE;
    printf("grade average:%d\n",average);

    
    return 0;
}