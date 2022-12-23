#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter an array of size 10 \n");
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d ",&arr[i]);
    }
    int counter = 1;

    for(int i = 0 ; i < 10 ; i++){
        for(int j = i + 1 ; j < 10 ; j++){
           if(arr[i] == arr[j]){
            counter++;
            break;
           }
        }
    }
    printf("The total number of  duplicates in the  array is %d",counter);
    return 0;
}