#include <iostream>

using namespace std;

int main()
{
    int x = 100;
    int y = 20;

    x = x - 5;  // We subtract 5 from 100, then assign it to x
    x = x + y;  // We add the value of y into x

    /*
    We expect that the output should be 115
    i.e. 100 - 5 + 20 = 115
    */
    cout << x << endl;
    return 0;
}
