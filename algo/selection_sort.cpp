#include <iostream>
int temp;
void swap(int* a,int* b){
    temp = *a;
    *a = *b;
    *b = temp;
}
void check_Lowest(int arr[],int n){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ;j++){
        if(arr[i] > arr[j]){
            swap(&arr[i],&arr[j]);
        }
        }
    }
    
}
int main(){
    //we are goind to sort array in ascending order
    int n = 10;
    int arr[10] = {4,5,3,1,8,9,3,2,4,0};
    printf("The array before sortinf is : ");
    for(int i = 0 ; i < n ; i++){
        printf(" %d ",arr[i]);
    }
    printf("\nThe array after sorting is : ");
    check_Lowest(arr,n);
    for(int i = 0 ; i < n ; i++){
        printf(" %d ",arr[i]);
    }
}