#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    static string collegeName;
    void setInstanceData(string name, int rollNow)
    {
        this->name = name;
        this->rollNo = rollNow;
    }
    void static setCollege(string collegeName)
    {
        collegeName = collegeName;
    }
};

string Student::collegeName;

int main()
{
    Student hasan;
    hasan.setInstanceData("Hasan", 1);
    hasan.setCollege("GMIT");
}