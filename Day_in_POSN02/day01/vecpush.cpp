// push-back vector

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> nums;
    for(int a=1; a<=5; a++){
        nums.push_back(a);
    }
    cout << "output from beginning and end: ";
    for(auto a=nums.begin(); a!=nums.end(); a++){
        cout << *a << " ";
    }
    return 0;
}