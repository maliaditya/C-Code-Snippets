#include <stdio.h>

int main(){

    int a[10]={}, num,ele;

    printf("\n Enter the no of elements to insert in the array.");
    scanf("%d",&ele);

    for(int i=0;i<ele;i++){
        
        printf("\narr[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d",&num);
    ele = ele+1;

    for(int i=ele;i>=0+1;i--){
        if(num<a[i]){
            a[i+1] = a[i];
        } else {
            a[i+1]=num;
        }
}
        for(int i=0;i<ele;i++){
        printf("%d ",a[i]);
    }

}
