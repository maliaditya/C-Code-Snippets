#include <stdio.h>

int main(){

    int a[10] = {10,20,12,34,12,34,5,6,23,45};
    int secondLargestNumber = 0;
    int largestNumber=0;

    for(int i=0;i<10;i++){

        if(largestNumber == 0){
            largestNumber = a[i];
        }else if (largestNumber < a[i]){
            largestNumber = a[i];
        }
    }

    for(int i=0;i<10;i++){
        if(secondLargestNumber<a[i] && a[i]<largestNumber ){
            secondLargestNumber = a[i];
        }
    }

    printf("\n The second largest number is %i. " , secondLargestNumber);
    printf("\n The  largest number is %i. " , largestNumber);
}