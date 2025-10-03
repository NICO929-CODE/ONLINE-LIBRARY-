
#include<iostream>
using namespace std;
class Book
{
public:
    string title;
    string  author;;
    int userID;
    int copies;
    void input(){
    cout<<"enter title"<<title<<endl;
    cin>>title;
    cout<<"enter author"<<author<<endl;
    cin>>author;
    cout<<"display number of copies"<<endl;
    cout<<"enter userID"<<userID<<endl;
    cin>>userID;
    }
    void Borrowbooks(){
    if(copies > 0){
        cout<<"Borrow"<<endl;
        copies--;

    }else{
        cout<<"Cannot Borrow"<<endl;
    }
}
void returnedbooks(){
if(copies>0){
    cout<<"returned"<<endl;
    copies++;
}else{
cout<<"not returned"<<endl;
}
}
};
class User
{
public:
    int userID;
    int usercopies=0;
    void input(){
    cout<<"userID"<<endl;
    cin>>userID;
    cout<<"usercopies"<<endl;
    }
    void Borrowedbook(){
        usercopies++;
         cout  <<"user"<< userID << " now has " << usercopies << " borrowed book"<<endl;
    }
    void returnedBook() {
        if (usercopies > 0) {
            usercopies--;
            cout << "User " << userID << " returned a book. Now has " << usercopies << " book(s)." << endl;
        } else {
            cout << "User " << userID << " has no borrowed books to return." << endl;
        }
    }
};
class Library
{
public:
      Book book;
    User user;

    void run() {
        book.input();
        user.input();

        int choice;
        do {
            cout << "\n--- Library Menu ---\n";
            cout << "1. Display Book\n";
            cout << "2. Borrow Book\n";
            cout << "3. Return Book\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;}

            while (choice != 4);
            }
    };
    int main() {
    Library lib;
    lib.run();
    return 0;
}
