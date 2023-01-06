#include <iostream>
using namespace std;
class character
{
private:
    int health;

public:
    character()
    {
        health = 100;

        cout << "The default Health of the character has been set to 100" << endl;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health = h;
    }
};

void takeInput(int arr[],int n);

void printArray(int arr[],int n);

int main(){
    // pointer variable = new int; and pointer variable = new int(value);
    int *a = new int(5);
    cout << *a << endl;
    //if the memory is full we will have error due to memory allocation failed 
    //so we have to empty the heap memory by using delete keyword

    delete a;
    //dynamically allcating an array 
    //int *array = new int[length]();
    int *arr = new int[5];
    
    cout << "Enter the elements for the array" << endl;
    takeInput(arr,5);
    cout << "The elements of the array are :-" << endl;
    printArray(arr,5);
    // deleting the array from the heap

    delete[] arr;

    //Now dynamic allocating array the object

    character *Apiod = new character;

    char *choice = new char;

    cout << "Do you want to change health of the character , y/n" << endl;

    cin >> choice;
    int h;


    while(*choice != 'n'){
        if(*choice == 'y'){
            cout << "Enter the health" << endl;
            cin >> h;
            Apiod->setHealth(h);
            cout << "The new health is " << Apiod->getHealth();
            break;

        }
        else{
            continue;
        }
    }

    delete choice;
    delete Apiod;

    return 0;




}

void takeInput(int arr[],int n){
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }


}

void printArray(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << endl;
    }
}