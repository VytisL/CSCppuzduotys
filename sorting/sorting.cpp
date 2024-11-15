#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> vector){
    if(vector.empty()){
        cerr << "Vector is empty" << endl;
    }
    for(int i = 0; i < vector.size()-1; i++){
        for(int j = 0; j < vector.size()-i-1; j++){
            int temp;
            if(vector.at(j) > vector.at(j+1)){
                temp = vector.at(j);
                vector[j] = vector.at(j+1);
                vector[j+1] = temp;
            }

        }
    }
    return vector;
}

int main(){

    ifstream input("duom4.txt");
    if(!input) {
        cerr << "Failed to open file" << endl;
    }
    ofstream output("output.txt");
    if(!output) {
        cerr << "Failed to open file" << endl;
    }
    int n;

    input >> n;
    vector<int> nums;
    int a;
    while(input >> a){
        nums.push_back(a);
    }
    
    nums = bubbleSort(nums);

    for(int i = 0; i < nums.size(); i++){
        output << nums.at(i) << " ";
    }


    input.close();
    output.close();
    return 0;
}
