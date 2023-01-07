#include <iostream>
using namespace std;
int main()
{
    /*1       1
      12     21
      123   321
      1234 4321*/
    int n = 4;
   
    //This loop is for printing rows
    for (int i = 1; i < n + 1; i++)
    {
        //we will use the first num for right part of the pattern
        int num = 1;
        //Thsi will print the num rowwise and increase it by one
        for(int j = 0 ; j < i  ; j++){
            cout << num;
            num++;
        }
        //this variable will be used for the second half of the pattern
        int num2 = num-1;
        //Using this loop to print the spaces in decreasing order
        for(int j = 0 ;  j <= 2*(n-1) - 2*i + 1 ;j++){
            cout << " ";
        }
        //print the number in decreasing order
        for(int j = 0 ; j < i  ; j++){
            cout << num2;
            num2--;
        }
        //after one row is complete , go to the next line
        cout << endl;
    }
}
