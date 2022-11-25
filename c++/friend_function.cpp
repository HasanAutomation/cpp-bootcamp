#include <iostream>
using namespace std;

/*
    Benefits of a friend function
    1. Friend function gets access to private members of more than one class
*/

class Name
{
private:
    string name;

public:
    void setName(string name)
    {
        this->name = name;
    }
    friend void giveName(Name);
};

void giveName(Name name)
{
    cout << name.name;
}

class A;
class B;

// a function which is a friend to more than one class
class A
{
private:
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    friend void fun(A, B);
};
class B
{
private:
    int b;

public:
    void setData(int b)
    {
        this->b = b;
    }
    friend void fun(A, B);
};

void fun(A obj1, B obj2)
{
    cout << "Sum is " << obj1.a + obj2.b;
}

class Complex
{
private:
    int real, img;

public:
    void setData(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void showData()
    {
        cout << "\nReal part " << real << " Imaginary part " << img;
    }
    // using friend function
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex);
    friend ostream &operator<<(ostream &, Complex);
    friend istream &operator>>(istream &, Complex &);
    Complex operator++()
    {
        Complex temp;
        temp.real = ++real;
        temp.img = ++img;
        return temp;
    }
};

ostream &operator<<(ostream &dout, Complex c)
{
    cout << c.real << " " << c.img;
    return dout;
}
istream &operator>>(istream &din, Complex &c1)
{
    cin >> c1.real >> c1.img;
    return din;
}

Complex operator-(Complex X)
{
    Complex temp;
    temp.real = -X.real;
    temp.img = -X.img;
    return temp;
}

Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.real = X.real + Y.real;
    temp.img = X.img + Y.img;
    return temp;
}

main()
{
    // Name n;
    // n.setName("Hasan");
    // giveName(n);
    // A obj1;
    // B obj2;
    // obj1.setData(10);
    // obj2.setData(20);
    // fun(obj1, obj2);

    //
    Complex c1, c2, c3, c4, c5;
    // c1.setData(10, 12);
    // c2.setData(20, 22);
    // c3 = operator+(c1, c2);
    // c3 = c1 + c2;
    // cout << "Before negetion \n";
    // c3.showData();
    // c4 = -c3;
    // c4.showData();

    // c5 = ++c4;
    // c5.showData();
    // c4.showData();
    cout << "Enter the real and imaginary part " << endl;
    cin >> c1;  // extraction
    cout << c1; // Insertion
}