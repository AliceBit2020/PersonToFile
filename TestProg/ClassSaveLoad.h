#pragma once
#include <fstream>
#include <iostream>
#include "Person.h"

using namespace std;




template <typename T1>
class SaveLoad
{
public:

	virtual void  Save(T1* obj, int size) = 0;
	virtual void Load(T1* obj) = 0;



};

template <typename T>
class ObjectToFile : public SaveLoad<T>

{
	string filename;
public:
	ObjectToFile(string fn) :filename(fn) {}

	virtual void  Save(T* obj, int size)
	{
		ofstream fout(filename, ios::trunc | ios::binary);

		fout.write((char*)obj, size);
		fout.close();

	};
	virtual void Load(T* obj)
	{

		ifstream fin(filename, ios::binary);
		fin.seekg(0, ios::end );
		int size = fin.tellg();

		fin.seekg(0, ios::beg);

		fin.read((char*)obj, size);
		fin.close();

	}




	ObjectToFile() = default;
};







