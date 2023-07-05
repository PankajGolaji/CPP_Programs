// WAP to check age group member using elseif condition
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << " Enter the age here: ";
    cin >> age;
    if (age < 12)
    {
        cout << "Child" << endl;
    }
    else if (age < 18)
    {
        cout << "Teenager" << endl;
    }
    else
    {
        cout << "Adult" << endl;
    }
    return 0;
}