#include <iostream>
#include <fstream>

using namespace std;

ifstream input("duom1.txt");

double average(){
    double avg = 0;
    int t;

    input >> t;
    
    for(int i = 0; i<t; i++){
        int temp = 0;
        input >> temp;
        avg += temp;
    }

    avg = avg/t;

    return avg;
}

int main(){

    ofstream output("output.txt");


    int n;
    double num;
    input >> n;


    for(int j = 0; j<n; j++){
        num = average();
        output << num << endl;
    }

    input.close();
    output.close();
    return 0;
}