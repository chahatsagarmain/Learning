#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int num = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n + i ; j++){
            if(j < n - i - 1){
                printf(" ");
                
            }
            else{
                
                printf("%d",num);
                num++;
            }
            
        }
        num = 1;
        printf("\n");
    }
}