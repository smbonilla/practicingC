#include <iostream>

using namespace std;

void sayHi(string name) {
    cout << "Hello " << name << endl;
}

int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    sayHi(name);

    return 0;
}