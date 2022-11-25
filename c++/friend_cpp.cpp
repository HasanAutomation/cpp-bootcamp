#include <iostream>

using namespace std;

class A
{
private:
    int a;

public:
    void setA(int a)
    {
        this->a = a;
    }
    void showA()
    {
        cout << a << endl;
    }
    friend void giveAccess(A); // declaration
};

void giveAccess(A instance)
{
    cout << "Outside class using friend function " << instance.a;
}

int main()
{
    A a;
    a.setA(10);
    giveAccess(a);
}