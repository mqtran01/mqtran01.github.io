---
layout: page
title: Hello World
permalink: /learning/cpp/002
page: '002'
---

# Overview
## What
- Write our first C++ program
- Learn the basic structure of a C++ program
- Compile and run our program

## Why
- The basic structure is necessary to build most C++ application
- Developers who have never used a compiled language may find compiling a source binary new to them

# Hello World
## Creating the File
Let's create a file called `helloWorld.cpp`. Make sure you save it somewhere you know how to get to from your Unix terminal.

We want to write a program like this:

```cpp
#include <iostream>

using namespace std;

int main()
{
    // This will print out a greeting onto the terminal console
    cout << "Hello World!" << endl;
    return 0;
}
```

Let's have a look what this all means:

- `#include <iostream>` means that we are including a system module which gives us access to the the IO streams. The one we are interested in is the terminal output!
- `using namespace std;` allows us to shortcut what we write later down the track for simplicity. For example, instead of writing `std::cout` we just need to write `cout`.
- `int main()` is where we start our program. Every C++ program will need this somewhere to execute. Everything that is inside the braces `{ }` will be executed.
- `// Comment` is a comment in your code and does not execute. Very useful to know write about what your code does, especially when it starts to get confusing. It's both for you and for people who read your code!
- `cout << "Hello World!" << endl;` allows us to send the string of characters "Hello World!" to the console terminal output (**c**onsole **out**put). The `endl` is the line ending, which moves the console to the next line.
- `return 0` finishes the function and returns control back up to the Terminal.

To get a grasp of what this program actually does, we should compile and run it.

## Compiling
We should go to the console and make sure we are in the same folder as where we saved the file.

You can type `ls` on your console and it should list all of the the files in your current directory. If it doesn't show `helloWorld.cpp` in what it listed then you are in the wrong place! Try searching around for the file. Have a read on how to navigate your Unix system using `cd`, such as `cd ..` to go up one directory level or `cd folderName` to go into the folder called `folderName`.

Now that we are in the same folder, we can compile out program using:
```bash
g++ -std=c++1z helloWorld.cpp -o helloWorld
```

Some things to observe:
- `g++` is the compiler for our C++ program and is something installed into your computer earlier.
- `-std=c++1z` is choosing the standard of C++17, which is the most recent version. Some compilers such as on the MacOS as of the time of writing have only the development version enabled, hence the `z`, however eventually all new compilers will be accepting `-std=c++17` sooner or later.
- `helloWorld.cpp` is the name of the file we created earlier with all our code!
- `-o helloWorld` chooses the output name of our compiled program. We are going to call it just `helloWorld` with no file extension.

If we have an error, it means that your compiler is not new enough to support a newer C++ standard. In the case for this tutorial, you can change the standard flag to `-std=c++14`, or worst case down to `-std=c++11`.

## Running the Program
We should be able to get the program up and running by executing the program on your Terminal:
```bash
./helloWorld
```
And you should get the output:
```bash
Hello World!
```

Congratulations! You have built your first C++ application!

It is a simple program that prints a `Hello World!` on your terminal screen.

# Extension Questions
These questions will extend you further by having a play with your code and researching online. You should not be expected to know the answers to these questions, however they are great food for thought!

1. Will the program still compile if we remove `#include <iostream>`?
2. If we remove `using namespace std;`, what do we need to change to make our application to work?
3. What happens if we don't compile with `-o helloWorld`?
4. Draw a small ASCII art drawing on your terminal.
<details>
<summary>Answers</summary>
<ol>
<li> No. Because we need it to access <code>cout</code>, which gives connection to your terminal screen, which is an IO device.</li>
<li> We need to change <code>cout</code> and <code>endl</code> to <code>std::cout</code> and <code>std::endl</code> respectively. The <code>using</code> tag allows us to omit the namespace.</li>
<li>See <a href="/assets/cpp/printE.cpp">sample solution</a>. This one prints out a line at a time to show a large letter <code>E</code>.</li>
</ol>
</details>

# Other Stuff
- Note about namespaces
- Note about int main

[file here]({{ "/assets/cpp/helloWorld.cpp" | relative_url }})
<hr><br>

