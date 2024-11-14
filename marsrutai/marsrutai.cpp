#include <iostream>
#include <fstream>

using namespace std;


struct Mars { 
        string name;
        int val;
        int min;
    };

void rodytiMars(int n, Mars mrsrt[]){

for(int i = 0; i < n; i++){
cout << "Marsrutas: " << mrsrt[i].name << " Laikas: " << mrsrt[i].val << " val " << mrsrt[i].min << " min" << endl;
}

}

int main(){
    int n;
    
    ifstream input("duom2.txt");

    input >> n;
    cout << n;
    Mars mrsrt[n];
    

    for(int i = 0; i < n; i++){
        string name;
        int val;
        int min;

        input >> name;
        input >> val;
        input >> min;

        
        if(name.length() > 20 || val < 0 || val > 24 || min < 0 || min > 60) {
            continue;
        } 

        mrsrt[i].name = name;
        mrsrt[i].val = val;
        mrsrt[i].min = min;

        cout << mrsrt[i].name << mrsrt[i].val << mrsrt[i].min;
    }
    input.close();

    rodytiMars(n, mrsrt);

    return 0;
}