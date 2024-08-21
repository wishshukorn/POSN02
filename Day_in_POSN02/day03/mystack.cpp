// build stack using 2 queues
// queue to stack /* done */

#include<bits/stdc++.h>
using namespace std;

queue<int> q1;
queue<int> q2;
int a;

class mystack{


    public:


        // void pushh(int n){
        //     if(arrayQueue1.empty() && arrayQueue2.empty()){
        //         arrayQueue1.push(n);
        //         return;
        //     }else if(arrayQueue1.empty() && !arrayQueue2.empty()){
        //         arrayQueue1.push(n);
        //         while(!arrayQueue2.empty()){
        //             a = arrayQueue2.front();
        //             arrayQueue1.push(a);
        //             arrayQueue2.pop();
        //         }
        //     }else{
        //         arrayQueue2.push(n);
        //         while(!arrayQueue1.empty()){
        //             a = arrayQueue1.front();
        //             arrayQueue2.push(a);
        //             arrayQueue1.pop();
        //         }
        //     }
        // }


            // if(arrayQueue2.empty()){
            //     if(arrayQueue2.empty()){
            //         arrayQueue2.push(n);
            //     }
            //     if(arrayQueue1.empty()){
            //         return;
            
        
        


            // arrayQueue1.pop();

            // if(top==MaxSize){
            //     cout << "Stack is full" << endl;
            //     return;
            // }else{
            //     listArray[top] = n;
            //     top++;
            
        


        // void pop(){
        //     if(top==0){
        //         cout << "Stack is empty" << endl;
        //         return;
        //     }else{}
        // }

        void push(int n){
            q1.push(n);
            if(q2.empty()){
                swap(q1, q2);
            }
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
            swap(q2, q1);
        }
        // void pop()
        // {
        //     if(q2.empty())
        //     {
        //         return;
        //     }
        //     q2.pop();
        // }
        int top()
        {
            if(q2.empty())
            {
                return -1;
            }
            return q2.front();
        }
};


int main(){
    mystack ms;
    ms.push(1);
    ms.push(2);
    ms.push(3);
    cout << ms.top() << '\n';

    
}