#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int sekos(vector<int> nums){
    int count = 0;



    for(int i = 0; i <= nums.size()-2; i++){
        for(int j = i+1; j < nums.size()-1; j++){
            for(int k = j+1; k < nums.size(); k++){
                if(nums.at(i) < nums.at(j) && nums.at(j) < nums.at(k)){
                
                count++;
            }
            
            }
        }
    }

    return count;
}


int main(){
    ifstream input("duom3.txt");
    if(!input) {
        cerr << "Failed to open file" << endl;
    }
    int n;

    ofstream output("output.txt");

    input >> n;

    vector<int> nums;
    int a;
    while(input >> a){
        nums.push_back(a);
    }
    

    output << "Count is : " << sekos(nums) << endl;


    input.close();
    output.close();
    return 0;
}