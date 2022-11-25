#include <iostream>

using namespace std;

class DoubleArray
{
private:
    int capacity;
    int *ptr;
    int lastIndex;

public:
    DoubleArray(int);
    ~DoubleArray();
    bool isEmpty();
    bool isFull();
    void add(int);
    void doubleArray();
    void halfArray();
    void insert(int, int);
    void edit(int, int);
    void display();
    void deleteAt(int);
    int find(int);
    int get(int);
};

DoubleArray::DoubleArray(int capacity)
{
    this->capacity = capacity;
    ptr = new int[capacity];
    lastIndex = -1;
}
DoubleArray::~DoubleArray()
{
    cout << "\nDestructor runs and deletes the dynamic memory location " << endl;
    delete[] ptr;
}
bool DoubleArray::isEmpty()
{
    return lastIndex == -1;
}
bool DoubleArray::isFull()
{
    return lastIndex == capacity - 1;
}
void DoubleArray::doubleArray()
{
    cout << "\nDouble the array " << endl;
    capacity *= 2;
    // Create a new array based on double size
    int *newPtr = new int[capacity];
    for (int i = 0; i <= lastIndex; i++)
        newPtr[i] = ptr[i];
    delete[] ptr;
    cout << "\nNew capacity " << capacity << endl;
    ptr = newPtr;
}

void DoubleArray::halfArray()
{
    cout << "\nShrink the array " << endl;
    capacity /= 2;
    int *newPtr = new int[capacity];
    for (int i = 0; i <= lastIndex; i++)
        newPtr[i] = ptr[i];
    delete[] ptr;
    cout << "\nNew capacity " << capacity << endl;
    ptr = newPtr;
}

void DoubleArray::add(int value)
{
    if (isFull())
        doubleArray();
    lastIndex++;
    ptr[lastIndex] = value;
}

void DoubleArray::insert(int index, int value)
{
    if (isFull())
        doubleArray();
    else if (index < 0 || index > lastIndex + 1)
        cout << "Invalid index " << endl;
    else
        for (int i = lastIndex; i >= index; i--)
            ptr[i + 1] = ptr[1];
    ptr[index] = value;
    lastIndex++;
}
void DoubleArray::edit(int index, int value)
{
    if (index < 0 || index > lastIndex + 1)
        cout << "Invalid index " << endl;
    ptr[index] = value;
}
void DoubleArray::display()
{
    if (isEmpty())
        cout << "\nArray is empty " << endl;
    else
    {
        cout << "\nThe values are " << endl;
        for (int i = 0; i <= lastIndex; i++)
            cout << ptr[i] << " ";
    }
}
void DoubleArray::deleteAt(int index)
{
    if (isEmpty())
        cout << "Array is empty " << endl;
    else if (index < 0 || index > lastIndex)
        cout << "Invalid index " << endl;
    else
    {
        for (int i = index; i < lastIndex; i++)
            ptr[i] = ptr[i + 1];
        lastIndex--;
        if (lastIndex <= capacity / 2)
            halfArray();
    }
}

int DoubleArray::find(int value)
{
    for (int i = 0; i <= lastIndex; i++)
        if (ptr[i] == value)
            return i;
    return -1;
}

int DoubleArray::get(int index)
{
    if (isEmpty())
        cout << "Array is empty " << endl;
    if (index < 0 || index > lastIndex)
        cout << "Invalid index " << endl;
    return ptr[index];
}

int main()
{
    DoubleArray d1(4);
    d1.add(10);
    d1.add(20);
    d1.display();
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.display();
    d1.deleteAt(4);
    d1.display();
}
