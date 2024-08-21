// c++ essential : vector /* done */


//
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <int> nums;
//     for(int a=1;a<=5;a++){
//         nums.push_back(a);
//     }
//     cout << "Output from begin to end: ";
//     for(auto a=nums.begin();a!=nums.end();a++){
//         cout << *a << " ";
//     }
//     return 0;
// }


//
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <int> nums;
//     nums.assign(5, 1);                  // 1 มี 5 ตัว
//     cout << "Vector contents: ";
//     for(int a=0;a<nums.size();a++){
//         cout << nums[a] << " ";
//     }
//     nums.push_back(2);
//     int n = nums.size();
//     cout << "\nLast element: " << nums[n - 1];
//     nums.pop_back();
//     cout << "\nVector contents: ";
//     for(int a=0;a<nums.size();a++){
//         cout << nums[a] << " ";
//     }
//     nums.insert(nums.begin(), 7);
//     cout << "\nFirst element: " << nums[0];
//     nums.clear();
//     cout << "\nSize after clear(): " << nums.size();
//     return 0;
// }


//
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <int> vector1;
//     for(int x=1;x<10;x++){
//         vector1.push_back(x);
//     }
//     cout << "Vector size: " << vector1.size() << endl;
//     cout << "Vector capacity: " << vector1.capacity() << endl;
//     cout << "Maximum size of vector: " << vector1.max_size() << endl;
//     vector1.resize(5);
//     cout << "Vector size after resizing: " << vector1.size() << endl;
//     if(vector1.empty() == false){
//         cout << "Vector is not empty" << endl;
//     }
//     else{
//         cout << "Vector is empty" << endl;
//     }
//     return 0;
// }