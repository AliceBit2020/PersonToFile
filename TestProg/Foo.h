#pragma once
#include<iostream>
#include<Windows.h>
#include<string.h>
#include <fstream>
using namespace std;

class Foo
{
	int* arr;
	int size;
public:
	Foo();
	explicit Foo(int sz);

	~Foo();
	void SaveFile() const;
	void ReadFromFile();
	void Show()const;
};
