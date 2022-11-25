#include <iostream>

using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    friend istream &operator>>(istream &din, Time &t1);
    friend ostream &operator<<(ostream &dout, Time t1);
    friend bool operator==(Time, Time);
};

istream &operator>>(istream &din, Time &t1)
{
    cin >> t1.hours >> t1.minutes >> t1.seconds;
    return din;
}
ostream &operator<<(ostream &dout, Time t1)
{
    cout << "Hours : " << t1.hours << endl;
    cout << "Minutes : " << t1.minutes << endl;
    cout << "Seconds : " << t1.seconds << endl;
}
bool operator==(Time t1, Time t2)
{
    if (t1.hours == t2.hours && t1.minutes == t2.minutes && t1.seconds == t2.seconds)
        return true;
    return false;
}

int main()
{
    Time t1, t2;
    Time ts[] = {t1, t2};
    for (int i = 0; i <= 1; i++)
    {
        cout << "Enter " << i + 1 << "st Time" << endl;
        cin >> ts[i];
        cout << ts[i];
    }
    bool isEqual = ts[0] == ts[1];
    if (isEqual)
        cout << "Times are same";
    else
        cout << "Times are not same";
}