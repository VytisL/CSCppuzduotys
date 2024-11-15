#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <algorithm>
#include <queue>
using namespace std;


struct client {
    int id;
    int time;
};

int main(){

    ifstream input("duom5.txt");
    if(!input) {
        cerr << "Failed to open file" << endl;
    }
    ofstream output("output.txt");
    if(!output) {
        cerr << "Failed to open file" << endl;
    }

    int n;
    input >> n;
    queue<client> clients;

    for(int i = 0; i < n; i++) {
        client c;
        input >> c.id >> c.time;
        clients.push(c);
    }


    int total = 0;
    for(; !clients.empty(); clients.pop()){
        client c = clients.front();
        total += c.time;
        output << "Aptarnavimas klientui " << c.id << " uztruko " << c.time << " minuciu." << endl;
    }
    output << "Bendras aptarnavimo laikas: " << total << " minutes" << endl;
   
    return 0;
}