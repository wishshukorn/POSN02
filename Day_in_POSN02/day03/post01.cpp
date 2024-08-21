#include<bits/stdc++.h>
using namespace std;

class AStack{
    private:
        int maxSize;
        int top;
        int *listArray;

    public:
        AStack(int size){
            maxSize = size;
            top = 0;
            listArray = new int[size];
        }
        ~AStack() {delete[] listArray;}
    
    void push(int it){ // Put "it" on stack
        if (top == maxSize)
            cout << "Stack is full" << endl;
        else
            listArray[top++] = it;
    }
}

int main(){
    string expression = "12*3+";
    int i;
    while(expression[i]!='\0'){
        if(expression[i])
        i++;
    }
}