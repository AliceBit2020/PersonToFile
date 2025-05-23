#include "Foo.h"

Foo::Foo()
{
	arr = nullptr;
	size = 0;
}

Foo::Foo(int sz)
{
	size = sz;
	arr = new int[size]{0};
}

Foo::~Foo()
{
	if(arr!= nullptr)
	delete[] arr;
}

void Foo::SaveFile() const
{
	

	ofstream out("Foo.txt", ios::binary | ios::trunc | ios::out);

	out.write((char*)&size, sizeof(size));

	// � ���� ����������� ������.
	out.write((char*)arr, sizeof(int) * size);

	// �������� ��������� ������.
	out.close();
}

void Foo::ReadFromFile()
{
	ifstream in("Foo.txt", ios::binary | ios::in);

	// ���������� ������� ������� � ����������.
	in.read((char*)&size, sizeof(size));

	if (arr != nullptr)
		delete[] arr;
	arr = new int[size];

	
	in.read((char*)arr, sizeof(int) * size);


	in.close();
}

void Foo::Show() const
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
