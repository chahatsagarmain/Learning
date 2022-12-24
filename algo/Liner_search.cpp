#include <iostream>
int main(){
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,18,19,15,10};
    int key;
    printf("The array is :");
    for(int i = 0 ; i < n ; i++){
        printf(" %d ",arr[i]);
        
    }
    int count = 0;


    printf("\nEnter the number you want to check\n");
    scanf("%d",&key);
    for(int i = 0; i < n ; i++){
        if(arr[i] == key){
            printf("The number you entered is present at index %d",i);
            count++;
            break;
        }
    }
    if(count == 0){
        printf("\nThe number you entered is not present");
    }
    return 0;
}