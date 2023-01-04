#include <iostream>
using namespace std;
//learning OOPS in C++
//Creating a class with object named character
class character {
    //Declared three data types
    public://public can be used at other places otherthan the class itself
    int health;
    int attack;
    int defense;
    private :
    int serial_number;//private data types can only be used in the class itself

    
};

int main(){
    //we created a character Apium with his statistics from the class
    character Apium;
    Apium.health = 100;
    Apium.attack = 32;
    Apium.defense = 76;
    character sapien;
    sapien.health = 500;
    sapien.health = 10;
    sapien.health = 50;

    cout << "The Stats of character Sapien are as follows" << endl;
    cout << "Health : " << Apium.health << endl;
    cout << "Attack : " << Apium.attack << endl;
    cout << "Defense : " << Apium.defense << endl;


    
}
