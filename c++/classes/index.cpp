#include <iostream>

using namespace std;

class College
{
    string name;
    int numberOfStudents;

public:
    College(string n, int num)
    {
        name = n;
        numberOfStudents = num;
    };
    string getName()
    {
        return name;
    }
    int getNumberOfStudents()
    {
        return numberOfStudents;
    }
};

int main()
{
    string name;
    int num;
    cout << "Enter your college name and the number of students: " << endl;
    getline(cin, name);
    cin >> num;
    College gmit(name, num);
    cout << gmit.getName();
    cout << gmit.getNumberOfStudents();
}