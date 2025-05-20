#include <stdio.h>
int main(){
    int size=5,subject=5;
    int roll[size];//{1,2,3,4,5}
    int mark[size][subject];//{{100,90,70,60,80},{},{},{},{}}
    int total[size];
    printf("enter 5 roll number:");
    for(int i=0;i<size;i++){
        scanf("%d",&roll[i]);
    }
    for(int i=0;i<size;i++){
        printf("enter all the marks of person %d",i+1);
        for(int j=0;j<subject;j++){
            scanf("%d",&mark[i][j]);
        }
    }
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=0;j<subject;j++){
            sum+=mark[i][j];
        }
        total[i]=sum;
    }
    printf(".............SCORE CARD..............\n");
    printf("roll number\ttamil\tenglish\tmaths\tscience\tsocial\ttotal");
    for(int j=0;j<subject;j++){
        printf("%d\n",total[j]);
    }
    return 0;
}