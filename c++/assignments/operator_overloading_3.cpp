#include <iostream>

using namespace std;

class Matrix
{
private:
    int M[3][3];

public:
    friend istream &operator>>(istream &din, Matrix &m);
    friend ostream &operator<<(ostream &dout, Matrix m);
    friend Matrix operator+(Matrix, Matrix);
    friend Matrix operator-(Matrix);
};

istream &operator>>(istream &din, Matrix &m)
{
    cout << "Enter Matrix" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> m.M[i][j];
    return din;
}
ostream &operator<<(ostream &dout, Matrix m1)
{
    cout << "Matrix is" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m1.M[i][j] << " ";
        }
        cout << endl;
    }
}
Matrix operator-(Matrix m)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m.M[i][j] = -m.M[i][j];
    return m;
}
Matrix operator+(Matrix m1, Matrix m2)
{
    Matrix temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.M[i][j] = m1.M[i][j] + m2.M[i][j];
        }
    }
    return temp;
}

int main()
{
    Matrix m1, m2, m3;
    cin >> m1 >> m2;
    cout << m1 << m2;
    m3 = m1 + m2;
    // cout << "After Negetion" << endl;
    // m = -m;
    cout << m3;
}