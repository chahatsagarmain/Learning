#include <iostream>
using namespace std;

class character
{
    // constructor is a kind of function is called when the class is created
    // It has the same name as that of the class and it does not have a return type
    // the  constructor with no parameter is called as default constructor
    // constructor is public
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

int main()
{
    character Apiod;
    // The constructor should be automatically called here
    string choice;
    int h;
    cout << "Do you want to change the default health yes or no" << endl;
    cin >> choice;
    while (choice != "no")
    {
        if (choice == "yes" || choice == "Yes")
        {
            cout << "Enter the health you want it to change to " << endl;
            cin >> h;
            Apiod.setHealth(h);
            break;
        }
        else
        {
            continue;
        }
    }
    printf("Now The health of the Apiod is %d", Apiod.getHealth());
    return 0;
}