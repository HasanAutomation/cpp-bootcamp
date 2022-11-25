/*
Define a class Array to implement array data structure with member variables to store capacity of array, last index of filled block,and a pointer to store the base address of the array
1. Define a constructor to store the capacity
2. Add a method to check whether the array is empty
3. Add a method to add an element to the array
4. Add a method to insert a new element in a specified index
5. Add a method to edit a value of a specified index
6. Add a method to delete an element
7. Add a method to check whether a array is full
8. Define a method to get an element of a specified index
9. Add a method to count total elements
10. Add a destructor to deallocate the memory of the array
11. Define a method to find an element of the array. If found return index or -1;
*/
#include <iostream>
using namespace std;

class Array
{
private:
    int capacity;
    int lastIndex;
    int *ptr;

public:
    Array(int);
    bool isEmpty();
    bool isFull();
    void add(int ele);
    void display();
    int get(int);
    int find(int);
    void insert(int, int);
    int count();
    void edit(int, int);
    void deleteAt(int);

    ~Array()
    {
        delete[] ptr;
    }
};
Array::Array(int cap)
{
    capacity = cap;
    ptr = new int[cap];
    lastIndex = -1;
}
bool Array::isEmpty()
{
    return lastIndex == -1;
}
void Array::edit(int index, int value)
{
    if (index >= 0 && index <= lastIndex)
        ptr[index] = value;
}
void Array::deleteAt(int index)
{
    if (isEmpty())
        cout << "Array is Empty " << endl;

    else if (index < 0 || index > lastIndex)

        cout << "Invalid index" << endl;
    else
        for (int i = index; i < lastIndex; i++)
            ptr[i] = ptr[i + 1];
    lastIndex--;
}
bool Array::isFull()
{
    return lastIndex == capacity - 1;
}
void Array::add(int ele)
{
    if (!isFull())
    {
        lastIndex++;
        *(ptr + lastIndex) = ele; // or ptr[lastIndex]
    }
    else
        cout << "Array is full so can't add " << ele << " to the array" << endl;
}
void Array::display()
{
    for (int i = 0; i <= lastIndex; i++)
    {
        cout << *(ptr + i) << endl;
    }
}

int Array::get(int index)
{
    if (index > lastIndex || index < 0)
    {
        cout << "Invalid index " << endl;
    }
    else
        return ptr[index];
}

int Array::find(int value)
{
    for (int i = 0; i <= lastIndex; i++)
    {
        if (ptr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
void Array::insert(int index, int value)
{
    if (index > lastIndex + 1 || index < 0)
    {
        cout << "Invalid index " << endl;
    }
    else if (isFull())
        cout << "Array is Full " << endl;
    else
        for (int i = lastIndex; i >= index; i--)
            ptr[i + 1] = ptr[i];
    ptr[index] = value;
    lastIndex++;
}
int Array::count()
{
    return lastIndex + 1;
}

int main()
{
    Array a1(3);
    a1.add(10);
    a1.add(20);
    a1.add(30);

    for (int i = 0; i < a1.count(); i++)
    {
        cout << a1.get(i) << endl;
    }
    // Delete and print again
    a1.deleteAt(1);
    a1.display();
}
