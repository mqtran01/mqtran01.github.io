#include <iostream>
#include <string>  // This is needed to use get the string data type

using namespace std;

int main()
{
    // Declares a string
    string text = "Hello";

    // Concatenates another word to the string
    text = text + " World!";

    // Prints out the resultant string
    cout << text << endl;

    return 0;
}
