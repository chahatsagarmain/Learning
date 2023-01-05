#include <iostream>
using namespace std;
//this keyword is a pointer that points to the current instance of class method
//this will store the current address of the  object we created
class character {
    public:
    int health;
    //Parameterised Constrcutor 
    //here using the this keyword helped us so we wont be confused between two healths
    character(int health){
        this -> health = health;
    }

};
int main(){
    character Apiod(100);
    //the parametrised contructor took the input for the health object
    
    cout << Apiod.health << endl;


}