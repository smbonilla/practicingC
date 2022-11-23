#include <iostream>

using namespace std;

// classes are like creating your own data type
class Book {
    public:
        string title;
        string author;
        int pages;

        // constructor function that is called everytime an object
        // from this class is created
        Book(string aTitle, string aAuthor, int aPages) {
            
            title = aTitle;
            author = aAuthor;
            pages = aPages;

            cout << "Creating Object: " << title << endl;

        }
};


int main(){

    Book book1("Sierra's BIO", "Sierra", 100); 

    Book book2("Nicole's BIO", "Nicole", 100); 

    // book2.title = "Nicole's BIO";
    // book2.author = "Nicole";
    // book2.pages = 100; 

    cout << book1.title << endl;
    cout << book2.title << endl;

    return 0;
}