#include <iostream>
using namespace std;
void print_array(int arr[][20],int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < 20 ; j++){
            printf("%d ",arr[i][j]);
            
        }
       cout << endl; 
    }

}
void pascals_logic(int arr[][20],int size){
    int mid = 10;
    int num = 1;
    int count = 0;
    arr[0][mid] = num;

    for(int i = 0 ; i < 10; i++){
        for(int j = 0 ; j <  20 ; j++){

            arr[i+1][j] = arr[i][j] + arr[i][j+1];
            
    }
    }

}
int main(){
    int arr[10][20] = {0};
    int size = 10;

    pascals_logic(arr,10);
    print_array(arr,10);
}