#include <iostream>

using namespace std;

// classes are like creating your own data type
class Book {
    public:
        string title;
        string author;
        int pages;
};


int main(){

    Book book1; 

    book1.title = "Sierra's BIO";
    book1.author = "Sierra";
    book1.pages = 100; 

    cout << book1.title << endl;
    return 0;
}