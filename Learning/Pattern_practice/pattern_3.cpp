#include <iostream>
using namespace std;
/**
**
***
****
*****
****
***
**
*
*/
int main(){
    int n = 10;
    //using this loop to print rows
    for (int i = 0; i < 10 ; i++){
        //till we reach the half part , we will print stars in incresing order
        if(i < 5){
            for(int j = 0 ; j < i + 1 ; j++){
                printf("*");
            }
        
        }
        //after we reach half , we will print stars in decreasing order
        
        else { 
            for(int j = n ; j > i+ 1   ; j--){
                printf("*");
            }
        }
        //after completing the fiest row , we will go to the next line
        printf("\n");
    }
}
