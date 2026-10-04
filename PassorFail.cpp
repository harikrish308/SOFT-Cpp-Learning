#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << " Enter Your Mark : ";
    cin >> marks;
    if(marks < 0 || marks > 100)
    {
        cout << " Invalid Mark have Entered!" << endl;
}
    else if(marks >= 40)
    {
        cout << " You are Passed..!" << endl;
    }
    else
    {
        cout << " You are Failed..!" << endl;
    }
}