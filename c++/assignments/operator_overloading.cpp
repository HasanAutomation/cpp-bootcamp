#include <iostream>

using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showData()
    {
        cout << "Value of Real part is " << a << " and imaginary part is " << b << endl;
    }
    // Operator overloading
    // Complex operator+(Complex next)
    // {
    //     Complex temp;
    //     temp.a = this->a + next.a;
    //     temp.b = this->b + next.b;
    //     return temp;
    // }

    // Implement + using friend function
    friend Complex operator+(Complex, Complex);
    friend ostream &operator<<(ostream &dout, Complex c1);
    friend istream &operator>>(istream &din, Complex &c1);
    Complex operator-(Complex next)
    {
        Complex temp;
        temp.a = a - next.a;
        temp.b = b - next.b;
        return temp;
    }
    Complex operator-()
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
    Complex operator*(Complex next)
    {
        Complex temp;
        temp.a = a * next.a;
        temp.b = b * next.b;
        return temp;
    }
    bool operator==(Complex next)
    {
        if (a == next.a && b == next.b)
            return true;
        else
            return false;
    }
    Complex operator++(int) // post increment
    {
        Complex temp;
        temp.a = a++;
        temp.b = b++;
        return temp;
    }
    Complex operator++() // pre increment
    {
        Complex temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}
ostream &operator<<(ostream &dout, Complex c1)
{
    cout << "REAL = " << c1.a << " IMG = " << c1.b << endl;
    return dout;
}
istream &operator>>(istream &din, Complex &c1)
{
    cin >> c1.a >> c1.b;
    return din;
}

int main()
{
    Complex c1, c2, c3, c4;
    cout << "Enter two values: << " << endl;
    cin >> c1;
    cout << c1;
    // c1.setData(10, 12);
    // c2.setData(10, 12);
    // c3 = c1 + c2;
    // c3 = c1.operator+(c2);
    // c4 = c1 - c2;

    // c1.showData();
    // c3.showData();
    // c3 = -c3;
    // c4.showData();
    // c3.showData();
    // c3 = c1 * c2;
    // c3.showData();
    // bool isEqual = c1 == c2;
    // cout << isEqual;
    // c3 = c1++;
    // c3 = ++c1;
    // c3 = c1 + c2;
    // c3.showData();
    // cout << c3;
    // c1.showData();
}