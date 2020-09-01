#include<stdio.h>

int main(){

    int a[10]={1,2,3,4,5,6},num;

    printf("Enter the element to be deleted;");
    scanf("%d",&num);

    for (int i=0;i<10;i++){
        if(num==a[i]||num<a[i]){
            a[i]=a[i+1];
        }
        
        
    }

       for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}