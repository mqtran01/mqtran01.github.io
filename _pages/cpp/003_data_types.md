---
layout: page
title: Data Types & Operators
permalink: /learning/cpp/003
page: '003'
---

# Overview
## What
- Learn what common data types there are
- Understand how basic arithmetic operators do for certain data types

## Why
- We should learn how different data types interact with each other
- See the computing power of C++

# Common Data Types
In the previous example, we have seen a common data type called a `string`, which is what `"Hello World!"` was - a string of characters together.

Here are some data types that you will likely play with:
- `int`: An integer. It is a number without decimals like `42`.
- `float`: A floating point number. It is a number that support decimals like `123.45`.
- `double`: A double precision floating point number. Basically a `float` that is able to have more precision (less prone to rounding errors).
- `char`: A character. It is can represent letters, numbers as text, and various other symbols. It can only be one character, and is wrapped with single quotes `' '`. Some examples are `'c'`, `'5'`, `'!'`, or `'\n'` (line feed - new line character).
- `bool`: A Boolean statement. Either `true` or `false`.
- `string`: A string of characters. This needs to be between double quotes `" "`, just like our `"Hello World!"` example. We will need to `#include <string>` to properly manipulate our strings.

# Declaration & Initialisation
We can declare a variable which takes form of a data type. We allocate a bit of memory in our computer to store our variables so we can operate on them, such as add or multiply. Generally we want to initialise our variable to a certain value when we declare it, just so we know what it is to begin with.

Examples of declarations and initialisation:
```cpp
int number            = 100;
float decimal         = 3.14;
double anotherDecimal = 100.01;
char letter           = 'c';
bool statement        = false;
string text           = "Hello World!";
```

Here we see that we declare a variable using an easy name to understand, then we use the equals sign to assign the variable to a specific value to a value. It is good practice to initialise the value like this.

# Seeing In Action
Let's give it a try in some code.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int x = 100;

    cout << x << endl;
    return 0;
}
```
We can see in the code, we declare and initialise an integer to 100, then we print it out onto the console.

# Operators
## Integer Operators
But we want to be able to do things with our variables. This is where operators come into play, such as the arithmetic operators `+` (add), `-` (subtract), `*` (multiply), and `/` (divide). When we do these operators, we can assign the resulting value to a variable using the `=` operator. Now we can expand our code to show us using these operators.

```cpp
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
```

When you compile and run the code, it should do the arithmetic as expected, and output the number `115`.

## Operating on other data types
The interesting thing about operators is that they also work on other data types where appropriate. One particular one to mention is adding of strings, which concatenates them together.
```cpp
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
```

Some things to note in the code example:
- We need to `#include <string>` to use the string data type
- We use the `+` operator to add the strings together

Give the application a run, and have a play around with different operators with the various data types, and print them out.

# Extension Questions
1. What if you do addition or subtraction for a `char`? When might this be useful?
2. When trying to do `5 / 2`, the answer is `2`. But we all know logically it should be `2.5`. Why?
3.

# Advanced Notes
- Mention what String actually is

