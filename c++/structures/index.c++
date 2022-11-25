#include<iostream>
#include<string.h>
using namespace std;

struct Book 
{
    int bookId;
    char title[100];
    float price;
};

struct Book inputBook();
void display(struct Book);

int main()
{
    struct Book wingsOfFire;
    wingsOfFire = inputBook();
    display(wingsOfFire);
}

struct Book inputBook()
{
    struct Book b;
    cout<<"\n Enter bookid,title and price";
    cin>>b.bookId;
    cin.ignore();
    cin.getline(b.title,20);
    cin >> b.price;
    return b;
}

void display(struct Book book)
{
    cout << book.bookId << book.title << book.price;
}