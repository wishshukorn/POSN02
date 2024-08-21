// queue to stack /* not done */

#include<bits/stdc++.h>
using namespace std;

queue<int> q1;
queue<int> q2;

class MyStack{

    public:

        void pushh(int n){
            q1.push(n);
            if(q2.empty()){
                swap(q1, q2);
            }
            while(!q2.empty()){
                q1.push()
            }

            if(q1!=NULL){
                while(q1!=NULL){
                    swap(q1, q2);
                    q2.push(q1.front);
                    q1.pop();
                }
            }
        }
};
