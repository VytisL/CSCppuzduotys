#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    ifstream input("duomenys.txt");
    if(!input) {
        cerr << "Failed to open file" << endl;
    }
    ofstream output("output.txt");
    if(!output) {
        cerr << "Failed to open file" << endl;
    }
    int N, M;    
    input >> N >> M;
    vector<int> kurjeriai(N, 0);
    vector<int> pinigai(N, 0);
    //kurjerius tikriausiai iseitu pasiversti struct
    

    int t1 = 0;
    int t2 = 0;
    int t = 0;
    

    for(int i = 0; i < M; i++){
        //praleisti laika
        for(int k = 0; k < N; k++){
            if(kurjeriai[k] >= t){
                kurjeriai[k] -= t;
            }
        }

        //gauti laika ir pinigus
        int p;
        input >> t2 >> p;
        vector<int> v;
        //rasti tinkama kurjeri
        int z = 101;
        int index;
        int temp;
        bool flag = false;
        for(int j = 0; j < N; j++){
            int b = 0;
            input >> temp;
            //iesko maziausio neuzimto kurjerio
            if(temp<z && kurjeriai[j] == 0){
                flag = true;
                z = temp;
                index = j;
            }
        }
        if(flag){
        kurjeriai[index] = z;
        pinigai[index] += p;
        }
        //apskaiciuoja laika praejusi nuo praeito ciklo
        t = t2-t1;
        t1 = t2;
        
    }

    for(int mon : pinigai){
        output << mon << " ";
    }
    
    input.close();
    return 0;
}