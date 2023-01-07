#include <iostream>
using namespace std;
int main()
{
    /*1       1
      12     21
      123   321
      1234 4321*/
    int n = 4;
    for (int i = 1; i < n + 1; i++)
    {
        int num = 1;
        for(int j = 0 ; j < i  ; j++){
            cout << num;
            num++;
        }
        int num2 = num-1;
        for(int j = 0 ;  j <= 2*(n-1) - 2*i ;j++){
            cout << " ";
        }
        for(int j = 0 ; j < i  ; j++){
            cout << num2;
            num2--;
        }
        
        cout << endl;
    }
}