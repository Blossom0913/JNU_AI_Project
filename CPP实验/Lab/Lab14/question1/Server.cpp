#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;





class Server
{
private:
    string filename = "people.dat";
public:
    Server(/* args */);
    ~Server();
};

Server::Server(/* args */)
{
    ifstream fin;
    Person p;
    fin.open(filename,ios_base::in|ios_base::binary);
    if(fin.is_open()){
        while(fin.read((char*)&p,sizeof(Person))){
            cout << p.name << "   " << p.age << endl;
        }
    }
    fin.close();
}

Server::~Server()
{
}
