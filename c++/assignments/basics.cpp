#include <iostream>

using namespace std;

void maxTwoNumbers()
{
    int a = 10, b = 12;

    cout << max(a, b);
}

void sumArray()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int size = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    cout << "Sum is " << sum << endl;
}

void highestValueDigit()
{
    int number = 173121, count = 0;
    int numbers[100];

    int highest, i = 0;

    while (number > 0)
    {
        int lastDigit = number % 10;
        numbers[i++] = lastDigit;
        number /= 10;
        count++;
    }
    highest = numbers[0];
    for (int i = 1; i < count; i++)
    {
        if (numbers[i] > highest)
            highest = numbers[i];
    }
    cout << "Highest Digit " << highest;
}

int main()
{
    // sumArray();
    highestValueDigit();
}