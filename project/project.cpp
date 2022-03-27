

#include <math.h>
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    if (a > b)
        cout <<"MAX="<< a;
    else 
        if (a < b)
            cout << "MAX=" << b;
    if (a < b)
        cout << "MIN=" << a;
    else
        if (a > b)
            cout << "MIN=" << b;
}
