#include<iostream>
#include<vector>
#include<string>
using namespace std;
//.....Book Class.....
class Book{
public:
    string title,author;
    bool borrowed;
    borrowed=false;
    title =t;
    author =a;
    }
    void display(){
    cout<<title<<"by"<<author;
    if(borrowed){
        cout<<"borrowed"<<endl;
    }else{
    cout<<"not borrowed"<<endl;
    }
    }
    };
    class User{
public:
    string name;
    User(string n){
    name = n;
    }
    void borrowedBook(Book){
      if(borrowedBook){
        Book.borrowed=true;
        cout<<name<<"borrow"<<Book.title<<endl;
    }else{
    cout<<Book.title<<"is already borrowed"<<endl;
    }
       }
       void returnBook(Book){
       if(Book.borrowed){
        Book.borrowed=false;
        cout<<name<<"raturned"<<Book.title<<endl;
       }else{
        cout<<Book.title<<"was not returned"<<endl;
       }
       }
    };
    class library{
public:
    vector<Book>;
    void addBook(string title,string author){
    Books.push_back(Book(title,author));
    }
    void listBook(){
    cout<<"library Books"<<endl;
    }
    };
    int main(){
    library lib;
    lib.addBook;
    user;
    lib.listBook();
    user.borrowedBook;
    lib.listBooks;
    user.returnedBooks;
    lib.listBooks;
    return 0;
    }
