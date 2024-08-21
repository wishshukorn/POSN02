// stack to queue /* done */

#include<bits/stdc++.h>
using namespace std;

stack<int> s1;
stack<int> s2;
int x;

class myqueue{
    public:
        void popp(){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }

        void pushh(int n){
            return s1.push(n);
        }

        int frontt(){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            x = s2.top();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            return x;
        }


};

int main(){
    myqueue q1;
    q1.pushh(1);
    q1.pushh(2);
    q1.pushh(3);
    q1.popp();
    cout << q1.frontt();
}