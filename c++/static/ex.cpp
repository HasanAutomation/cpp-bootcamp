#include <iostream>

using namespace std;

class Account
{

private:
    int accNo;
    string name;

public:
    static float roi;

    static float getROI()
    {
        return roi;
    }

    Account(int accNo, string name)
    {
        this->accNo = accNo;
        this->name = name;
    }
    void showData()
    {
        cout << "This account belongs to " << name << " and the ROI is " << roi;
    }
};

float Account::roi = 6.5;

int main()
{
    Account a1(201, "Hasan");
    // a1.showData();
}