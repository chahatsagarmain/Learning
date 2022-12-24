#include <iostream>

int main(){
    int n = 10;
    //binary search can only be used on monotonic function arrays
    //you can enter your own array here
    int arr[n] = {1,3,5,7,8,9,10,13,15,17};
    
    int start = 0;
    int end = n - 1;
    int check;
    int mid = (start + end) / 2;;
    int counter = 0;
    
    printf("Enter element to find in the sorted array\n");
    scanf("%d",&check);
    while(counter != 1){
    mid  = (start + end)/2;
    // we check the mid element first otherwise we change the mid accordingly to the check variable
    // if check is greater than the mid of array then we will move to the other half of the array and check the mid element and so on 
    // if check is lesser we will move to other smaller half
    
    if(arr[mid] == check){
        
        counter++;
        break;

    }
    else if(check > arr[mid]){
        start = mid + 1;
    }
    else{
        end = mid - 1;

    }
}
   if(counter == 1){
    printf("The array element is present");
   }
   else{
    printf("The element is not present in array");
   }
}
