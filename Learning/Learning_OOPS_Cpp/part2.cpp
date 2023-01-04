#include <iostream>
// In this part i wil use  getters and setters
class character
{
private:
    int health;
    // here health is private but we still obtain health using getter function
    // we can set the health using by getter
    //really useful when we want  a spefic person to set the values for our private member 


public:
    int attack;
    int defense;

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
    int h;
    printf("Enter the amount of health , you need to set for Apiod\n");
    scanf("%d", &h);
    Apiod.setHealth(h);

    printf("The health of Apoid is %d\n", Apiod.getHealth());
    return 0;
}
