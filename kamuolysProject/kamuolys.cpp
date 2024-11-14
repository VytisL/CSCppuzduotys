#include <iostream>
#include <fstream>

using namespace std;





int main(){
    int d;
    int n;
    int a;
    int b;
    int c;

    ifstream input("duom.txt");
    ofstream output("output.txt");

    input >> d >> n;
    cout << "N is: " << n << endl;
    
    d++;
    for(int i = 1; i <= n; i++){
        if(d > a || d > b || d > c){
            output << "Kamuolys netelpa i " << i << " deze" << endl;
        } else{
            output << "Kamuolys telpa i " << i << " deze" << endl;
        }
    } 
    input.close();
    output.close();
   
    return 0;
}
