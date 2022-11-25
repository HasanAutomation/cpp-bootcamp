#include<iostream>

using namespace std;

struct Complex
{
    /* data */
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a = x;
            b = y;
        }
        void showData()
        {
            cout << a << " " << b <<endl;
        }
};

int main()
{
    Complex c1;
    c1.setData(10,12);
    c1.showData();
}
