Say 🗣️

A lightweight, header-only C++11 library to print formatted text to the console.
It provides two simple functions:

say(...) → prints text with newline

sayraw(...) → prints text without newline

Designed to be simple, elegant, and easy to use.

🌟 Features

✅ Header-only, no installation required

✅ Compatible with C++11 and above

✅ Print any number of arguments

✅ Option to print with or without newline

✅ Works with all types compatible with std::cout

💻 Example Usage



#include "say.h"


int main()
{

    say("Hello,", "this is your custom print function!");
    say("You can print numbers too:", 42, 3.14);
    sayraw("No newline here...");
    say(" but now there is one!");

    return 0;
}

🖥️ Output
Hello, this is your custom print function!
You can print numbers too: 42 3.14
No newline here... but now there is one!

🛠️ Installation

Copy say.h into your project directory

Include it in your code:

#include "say.h"


Use say(...) or sayraw(...) as needed

🔹 Notes

say(...) automatically adds a newline after printing

sayraw(...) prints everything inline without a newline

Supports multiple arguments using variadic templates

Compatible with Visual Studio Community 2022 and above ✅
