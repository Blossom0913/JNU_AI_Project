/*
Using file reading/writing to imitate server and client, 
which means you need to write a server program “Server.cpp” and a client program “Client.cpp”.
 Their functions are given below:

1.     Both the server and the client have a “Person” class:

class Person {

public:

    char name[10];

    int age;

};

2.The client is responsible for creating a file and writing the information in an 
object of “Person” into the file.

3.The server is responsible for reading the information written by the client 
and printing it out.  It needs to listen to the information from the client 
(monitor if the file exists or if the file is empty).

4.Either the client runs first or the server runs first, your system should run successfully.

5.Extend the functionality of the client and Server, so that the client and server
 support writing and reading the information in N objects of “Person” class.
*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include <cstring>
using namespace std;



class Person {

public:

    char name[10];

    int age;

};

class Client
{
private:
    
public:
    
    Client();
    ~Client();
    void add(const char* name,int age);
};

Client::Client()
{
    
}

Client::~Client()
{
}

void Client::add(const char* name,int age){
    Person* p = new Person();
    string filename = "people.dat";
    for(int i = 0; i < strlen(name);++i){
        p->name[i] = name[i];
    }
    p->age = age;
    
    ofstream fout(filename,ios_base::app|ios_base::out);
    if(!fout.is_open()){
        cerr << "can't open" << endl;
    }
    fout.write((char*)p,sizeof(Person));
    fout.close();
}
