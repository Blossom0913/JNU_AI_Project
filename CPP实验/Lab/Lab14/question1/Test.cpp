#include"Client.cpp"
#include"Server.cpp"


int main(){
    Client* client = new Client();
    client->add("Lebron",38);
    client->add("Curry",34);
    Server* server = new Server();
    return 0;
}