#include <iostream>
using namespace std;

int main() {

    string name;
    int age;
    float marks;

  
    cout << "Enter your full name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your total marks (out of 500): ";
    cin >> marks;

    float percentage = (marks / 500.0f) * 100.0f;

    cout << "\n====================================\n";
    cout << "          STUDENT PROFILE           \n";
    cout << "====================================\n";
    cout << " Name       : " << name << "\n";
    cout << " Age        : " << age << " years\n";
    cout << " Marks      : " << marks << " / 500\n";
    cout << " Percentage : " << percentage << "%\n";
    cout << "====================================\n";

    return 0;
}