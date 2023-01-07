#include <iostream>
using namespace std;

int main(){
    int n = 10;
    for (int i = 0; i < 10 ; i++){
        if(i < 5){
            for(int j = 0 ; j < i + 1 ; j++){
                printf("*");
            }
        
        }
        else { 
            for(int j = n ; j > i+ 1   ; j--){
                printf("*");
            }
        }
        printf("\n");
    }
}