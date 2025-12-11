#include <iostream>
using namespace std;

int main()
{
    int workingHours;
    int limitWorkingHours = 6;
    int salary;

    cout << "Enter your working time : ";
    cin >> workingHours;
    cout << "Your working hour is " << workingHours << " hours\n";

    if (workingHours > limitWorkingHours) {
        int otHours = workingHours - limitWorkingHours;
        salary = (workingHours - otHours) * 100 + (otHours * 200);
        cout << "Your overtime working hours is " << otHours << "\n";
        cout << "Your salary is " << salary << "\n";
    }
    else {
        salary = workingHours * 100;
        cout << "Your salary is " << salary << "\n";
    }

    return 0;
}
