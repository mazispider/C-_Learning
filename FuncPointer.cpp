﻿// FuncPointer.cpp : Defines the entry point for the console application.
// cherno Function Pointers in C++

#include "stdafx.h"
#include <iostream>

void HelloWorld() {
	std::cout << "Hello Wolrd!" << std::endl;
}

int main()
{
	//auto function = HelloWorld;
	void(*function)() = HelloWorld;
	function();
	function();
    return 0;
}

