// Print Number 1 to N.

#include <iostream>
using namespace std;

void print1ToN(int n)
{

    if (n == 0)
    {
        return;
    }

    print1ToN(n - 1);
    cout << n << endl;
}

int main()
{

    int n;
    cout << "go upto : ";
    cin >> n;

    print1ToN(n);
}