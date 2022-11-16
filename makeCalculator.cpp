#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  int num1, num2;
  char op; 

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter operator: ";
  cin >> op;

  cout << "Enter second number: ";
  cin >> num2;

  if (op == '+' || op == 'p') {
    cout << num1 + num2 << endl;
  } else if (op == '-' || op == 'm') {
    cout << num1 - num2 << endl;
  } else if (op == '/' || op == 'd') {
    cout << num1 / num2 << endl;
  } else if (op == '*' || op == 'x') {
    cout << num1 - num2 << endl;
  } else {
    cout << "Invalid Operator";
  }


  return 0;
}