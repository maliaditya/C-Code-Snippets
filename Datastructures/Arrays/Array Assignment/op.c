#include<stdio.h>
void main(){
        int s,arr[s], arr2[s], large, s_large;
        printf("Enter array size : ");
        scanf("%d",&s);
        printf("Enter %d elements in array\n",s);
        for(int i = 0; i < s; i++){
                printf("arr[%d] = ",i);
                scanf("%d",&arr[i]);
                arr2[i] = arr[i];
        }

        large = arr[0];
        for(int i = 0; i < s; i++)
                if(arr[i] > large)
                        large = arr[i];

        s_large = arr[0];
        for(int i = 0; i < s; i++){
                if(arr[i] != large){
                        if(arr[i] > s_large)
                                s_large = arr[i];
                }
        }
        for(int i = 0; i < s - 1; i++){
                for(int j = 0; j < s - i - 1; j++){
                        if(arr[j] > arr[j+1]){
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }

        printf("Second largest element : %d\n",s_large);
          printf("Second smallest element : %d\n",arr[1]);
}