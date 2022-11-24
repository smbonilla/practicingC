#include <iostream>

using namespace std; 

class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

// same functionality as Chef plus more
class ItalianChef : public Chef{
    public: 
        void makeLasagna(){
            cout << "The chef makes Lasagna" << endl;
        }
        // overriding
        void makeSpecialDish(){
            cout << "The chef makes clam linguini" << endl;
        }
};

int main(){

    Chef chef;
    chef.makeSpecialDish();
    
    ItalianChef italianChef;
    italianChef.makeSpecialDish();

    return 0;
}