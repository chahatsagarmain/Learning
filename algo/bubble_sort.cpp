#include <iostream>
//meter variable is used to optimise the code
int meter = 0;
void swap(int& a , int& b){
    int temp;
    temp = a;
    a = b;
    b= temp;
}
void bubbling_sort(int arr[],int size){
  int j = 0;
  //create a for loop less than size - 1
  for(int j = 0; j < size - 1 ; j++){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
            meter++;
        }
        if(meter == 0){
            break;
        }

    }
  }
}
void print_array(int arr[],int size){
    for(int i = 0 ; i < size ; i++){
        printf(" %d ",arr[i]);
 }
}
int main(){
    int arr[10];
    printf("Enter a number for array of size 10 \n");
    for(int i = 0 ; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The array is : ");
    print_array(arr,n);
    bubbling_sort(arr,n);
    printf("\n");
    printf("The sorted array is : ");
    print_array(arr,n);

}