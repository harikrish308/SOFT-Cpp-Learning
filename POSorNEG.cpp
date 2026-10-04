#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any Number : ";
    cin >> num;

    if(num > 0)
    {
        cout << "The Number is POSITIVE!" << endl;
    }
    else if(num < 0)
    {
        cout << " The Number is NEGATIVE!";
    }
    else
    {
        cout << " The Number is ZERO!" << endl;
    }

}