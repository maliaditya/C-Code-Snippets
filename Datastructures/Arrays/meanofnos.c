#include<stdio.h>

int main(){

    int a[5] = {};
    int sum=0;
    float avg=0;

    for(int i=0;i<5;i++){

        printf("%d) ", i+1);
        scanf("%d",&a[i]);

    }

    for(int i=0;i<10;i++){
        sum = sum +a[i];
    }

    avg = (float)(sum/10);

    printf("The mean of the 10 numbers is %2f",avg);


}