#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    // requesting name of user
    string name;
    cout << name;
    cout << "Enter your name: ";
    getline(cin, name);

    // clearing cin buffer 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // requesting age of user
    int age; 
    cout << "Enter your age: ";
    cin >> age;

    // talking to user
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old!" << endl;

    return 0;
}