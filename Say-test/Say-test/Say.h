#pragma once
#include <iostream>
#include <string>


template<typename T>
void say(const T& value)
{
    std::cout << value << std::endl;
}

template<typename T, typename... Args>
void say(const T& first, const Args&... rest)
{
    std::cout << first << " ";
    say(rest...);
}

template<typename T>
void sayraw(const T& value)
{
    std::cout << value;
}

template<typename T, typename... Args>
void sayraw(const T& first, const Args&... rest)
{
    std::cout << first << " ";
    sayraw(rest...);  
}
