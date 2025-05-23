#include<iostream>
#include<Windows.h>
#include<string.h>
#include "Person.h"
#include "Student.h"
#include<fstream>
#include "Foo.h"

#include "ClassSaveLoad.h"
using namespace std;


int main()
{
    Person* p = new Person("Oleg", "222322");
    
    
    
    ObjectToFile<Person>* p_file = new ObjectToFile<Person>("person.txt");
    p_file->Save(p);

    Person* obj_from_file = new Person();

    p_file->Load(obj_from_file);
    obj_from_file->Print();
    
    /////////1.Запис у файл строк різного виду   out<<     //////////////////////////////////////////////////
  /*  ofstream out("Text.txt");
    string str = "string for file1 ";
    out << str<<endl;

    char str_ch[20]= "char [] for file" ;
    out << str_ch<<endl;

    char* char_ptr = new char[20]{ "ptr char for file" };
    out << char_ptr<<endl;
    out.close();*/

    /////////2.Забрати з файла строки різного виду    in>>     ///////////////////////////////////////////////
 
    //  ifstream in("Text.txt");

  //  string str_fromf;//////////////класичний string
  //  // Забрати 1 слово
  //  in >> str_fromf;//// 1 слово////////////////  in>>string     !!!!!!!!!!!!!!
  //  cout << str_fromf<<" ";

  //  while (in)//// забрати все по 1 слову
  //  {
  //      in >> str_fromf;//// 1 слово
  //      cout << str_fromf << " ";
  //}
  //  in.close();


    //ifstream in("Text.txt");
    //char str_ch_fromf [20];
    //while (in)//// забрати все по 1 слову
    //{
    //    in >> str_ch_fromf;//// 1 слово///////////////  in>>char [15]   !!!!!!!!!!!!!!
    //    cout << str_ch_fromf << " ";
    //}
    //in.close();



    //  ifstream in("Text.txt");
    //  char* char_ptr_fromf =new char[15];
    //while (in)//// забрати все по 1 слову
    //{
    //    in >> char_ptr_fromf;//// 1 слово///////////////  in>>char*   !!!!!!!!!!!!!!
    //    cout << char_ptr_fromf << " ";
    //}
    //in.close();
    //delete[] char_ptr_fromf;


    //3. Запис у файл обьєктів класів в бінарному режимі

    /*Person obj("IvanIvanIvan", "222322");

    ofstream out("Text.txt",ios::binary| ios:: trunc);

    out.write((char*)&obj, sizeof(obj));
    out.close();

    Person from_f;
    ifstream in("Text.txt", ios::binary );

    in.read((char*)&from_f, sizeof(obj));
    from_f.Print();

    in.close();*/
    ////4. 

    //Foo obj(4);

    //obj.SaveFile();
    //obj.Show();
    //
    //Foo test;
    //test.ReadFromFile();
    //test.Show();



}