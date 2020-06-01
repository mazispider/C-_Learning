// FuncPointer2.cpp : Defines the entry point for the console application.
// cherno Function Pointers in C++

#include "stdafx.h"
#include <iostream>

void HelloWorld(int a) {
	std::cout << "Hello Wolrd! Value:"<< a << std::endl;
}

int main()
{
	typedef void(*HelloWorldFunction)(int);
	HelloWorldFunction function = HelloWorld;
	function(8);
	function(9);
	function(10);
	function(11);
	return 0;
}
