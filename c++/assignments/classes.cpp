#include <iostream>

using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex()
    {
    }
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void setComplex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    int getReal()
    {
        return this->real;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

class Time
{
private:
    int hour, minutes, seconds;

public:
    void setTime(int hour, int minutes, int seconds)
    {
        this->hour = hour;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    void printTime()
    {
        cout << hour << " hours " << minutes << " minutes " << seconds << " seconds";
    }
};

class Factorial
{
private:
    int number;

public:
    Factorial(int number)
    {
        this->number = number;
    }
    void printFactorial()
    {
        int fact = 1;
        for (int i = this->number; i >= 1; i--)
        {
            fact *= i;
        }
        cout << "\nFactorial of the number " << this->number << " is " << fact;
    }
};

class StaticCount
{
public:
    static int count;
    static void increment()
    {
        count++;
    }
    void static printStatic()
    {
        cout << count;
    }
};

int StaticCount::count = 0; //  defining the variable

int main()
{
    Complex c1(10, 12);
    Time t1;
    t1.setTime(2, 32, 20);
    // t1.printTime();
    Factorial f1(5);
    // f1.printFactorial();
    // cout << c1.getReal();
    StaticCount s1;
    s1.increment();
    s1.increment();
    s1.increment();
    s1.printStatic();
}