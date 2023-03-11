#include<iostream>
#include<cstring>   //! Header file for string oporations
#include<fstream>   //! This is the header file for using fileIO oporations
                    /*
                    * Using this header file, we get some default class for fileIO oporation
                    *   streambase  => This is the base class and other two are deriver class from this base class
                    *   ofstream    => for write oporation
                    *   ifstream    => for read oporation
                    */
using namespace std;
int main(){
    string a = "My name is Nilanjan Debnath";
    string b, c;

    // //! Giving our output (string) to file
    // ofstream out;                //* Here we create a "ofstream" class type variable "out"
    // out.open("sample.txt");      //* opening the file "sample.txt"
    // out<<a;                      //* Which writing the "a" string into "sample.txt" file
    // out.close();                 //* Closing the "out" oporation on the file
    //                              //* We have to close write oporaion function before any other read or write function open the file
    
    ifstream in1, in2;           //* Here we create two "ifstream" class type variables "in1" and "in2"
    
    //! Getting input (string) from file
    in1.open("sample.txt");      //* Opening the file for reading oporation
    in1>>b;                      //* This will read only the first word on the file and stored into string "b"

    in2.open("sample.txt");       
    getline(in2, c);             //* This will read the entire first line on the file and stored into string "c"
    
    in1.close();                 //* We can read usnig multiple functions without closing
    in2.close();                 //* Closing the file oporations
    cout<<b<<endl<<c<<endl;
    cout<<endl;
    
    //! If we want to read all the lines, then we have to do like bellow
    ifstream read;
    string s;
    read.open("sample.txt");
    while(!read.eof()){     //* "eof" means "end of file"
        getline(read, s);   //* That mean untile it finis the file, it alwas return 0
        cout<<s<<endl;      //* So until it give us non zero valu, we run getline()
    }
    return 0;
}