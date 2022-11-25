#include <iostream>

using namespace std;

class A
{
public:
    int a = 10;

protected:
    void setValue(int a)
    {
        this->a = a;
    }
};
class B : public A
{
public:
    int b = 20;
    void setData(int k)
    {
        setValue(k);
    }
};

int main()
{
    B bIns;
    bIns.setData(100);
    cout << bIns.a;
}