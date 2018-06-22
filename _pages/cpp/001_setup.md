---
layout: page
title: Setting Up C++ Environment
permalink: /learning/cpp/001
page: '001'
---

# Overview
## What
- We want to start up an environment to work in C++
- Learn how to get around using Unix

## Why
- C++ is a compiled language and needs to be compiled down to bytecode
- Unix is the most popular system to learning programming on (sorry Windows!)
<hr><br>

Starting off with setting up the right environment is a good step to start programming. For this tutorial series, we will be using Unix to learn C++. We will use `g++` as our compiler for these tutorials.

# Development Environment
## Unix
If you have a Unix system, you will likely have the compiler already. Open up your terminal and type in:
```bash
g++ -v
```
If it is installed correctly, you should see some non-errored output like:
```bash
Using built-in specs.
Target: x86_64-linux-gnu
Configured with: ...
Thread model: posix
gcc version 5.4.0 20160609 ...
```

If you don't get a message like this, you are likely on a Unix variant that is not made for beginners. You will need to determine your package installer or consult the [official installation guide](https://gcc.gnu.org/install/). Do this at your *own* risk.

## MacOS
MacOS has a nicely packaged developer setup that you can install by typing in the Terminal:
```bash
xcode-select --install
```
Follow the prompts to install command line developer tools.

If it comes up with
```
xcode-select: error: command line tools are already installed, use "Software Update" to install updates
```
then it means that it is already installed!

Now just to double check we type in:
```bash
g++ -v
```
And we should get something like:
```bash
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 9.0.0 (clang-900.0.37)
Target: x86_64-apple-darwin17.6.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

## Windows
If you have Windows 10 on the Creators Update, then you can install Ubuntu directly from the Microsoft store. You can choose the [base release](https://www.microsoft.com/en-us/p/ubuntu/9nblggh4msv6) or choose one of the more updated releases. This will install Ubuntu command line into windows, just like installing any Windows native app.

To access your Ubuntu, you can search for `Bash on Ubuntu on Windows`. This opens up your Ubuntu terminal. It may take some time for the initial setup. Once this is complete, you should be able to type in:
```bash
g++ -v
```
And see non-errored output like:
```bash
Using built-in specs.
Target: x86_64-linux-gnu
Configured with: ...
Thread model: posix
gcc version 5.4.0 20160609 ...
```

# Text Editor
Some people use IDEs (Integrated Development Environments) while some use their favourite flavour of text editor. I strongly believe with starting by using a text editor first, then move into an IDE depending on the work condition.

There are some good text editors out there:
- [Visual Studio Code](https://code.visualstudio.com/) - My personal favourite by far
- [Sublime Text](https://www.sublimetext.com/) - This has an evaluation version for free and nags you every 20 saves to purchase
- [Atom](https://atom.io/)
- [vim](https://www.vim.org/) - This has a steep learning curve, however can be use on almost every Unix system
- [emacs](https://www.gnu.org/software/emacs/) - Also a common text editor used by many developers

If you completely must choose an IDE, there are the following:
- [CLion](https://www.jetbrains.com/clion/) - Enterprise level software, however has free student licence [here](https://www.jetbrains.com/student/)
- [Visual Studio](https://visualstudio.microsoft.com/) - Not to be confused with the text editor Visual Studio Code

I choose Visual Studio Code as it is lightweight, extensible, and powerful. Although not a fully fledged IDE, it can do a lot of things through very customisable shortcuts.
___
Now we are ready to start!