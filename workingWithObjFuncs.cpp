#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa; 

        // constructor function
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor; 
            gpa = aGpa;
        }

        // function
        bool hasHonors(){
            if(gpa >= 3.5){
                return true; 
            }
            return false;
        }

};

int main() {

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Comp Sci", 3.6);

    // calling hasHonors function
    cout << student1.hasHonors() << endl;

    return 0;
}