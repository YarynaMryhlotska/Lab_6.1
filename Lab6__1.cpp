#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int b, const int Low, const int High)
{
    for (int i = 0; i < b; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int b)
{
    for (int i = 0; i < b; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int Number(int* a, const int b)
{
    int number = 0;
    for (int i = 0; i < b; i++)
    {
        if ((a[i] > 0 && (a[i] % 5) != 0) || (a[i] < 0))
        {
            number++;
        }
    }
    return number;
}


void Zero(int* a, const int b)
{
    for (int i = 0; i < b; i++)
        if ((a[i] > 0 && (a[i] % 5) != 0) || (a[i] < 0))
            a[i] = 0;
}


int Sum(int* a, const int b)
{
    int S = 0;
    for (int i = 0; i < b; i++)

        if ((a[i] > 0 && (a[i] % 5) != 0) || (a[i] < 0))
            S += a[i];
    return S;
}

int main()
{
    srand((unsigned)time(NULL));
    const int b = 22;
    int a[b];

    int low = -40;
    int High = 50;



    Create(a, b, low, High);
    Print(a, b);

    cout << "Sum = " << Sum(a, b) << endl;
    cout << "Number = " << Number(a, b) << endl;

    Zero(a, b);
    Print(a, b);
    return 0;
}