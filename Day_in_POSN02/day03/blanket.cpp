#include<bits/stdc++.h>
using namespace std;

// class AStack{
//     private:
//         int maxSize;
//         int top;
//         int *listArray;

//     public:
//         AStack(int size){
//             maxSize = size;
//             top = 0;
//             listArray = new int[size];
//         }

//         ~AStack() {delete[] listArray;}
    
//         void push(int it){ // Put "it" on stack
//             if (top == maxSize)
//                 cout << "Stack is full" << endl;
//             else
//                 listArray[top++] = it;
//         }
// };

stack<char> AStack;

bool isMaching(char opening, char closing){
    if((opening=='(')&&(closing==')')||(opening=='[')&&(closing==']')){
        return true;
    }
    return false;
}

bool isBalanced(string expression){
    int i=0;
    while(i<(expression.length())){
        if((expression[i] == '(')||(expression[i] == '[')){
            AStack.push(expression[i]);
        }
        else if ((expression[i] == ')')||(expression[i] == ']')){
                if(!isMaching(AStack.top(), expression[i])){
                    return false;
                }else{
                    AStack.pop();
                }
        }
        i++;
    }

    if(AStack.empty()) return true;
    return false;
}



int main(){
    
    string expression = "5 + ( )- 3";
//    AStack *st = new AStack('j');
    int i=0;

    if(isBalanced(expression)){
        cout << expression << " is balanced" << endl;
        return 0;
    }else{
        cout << expression << "is NOT balanced" << endl;
        return -1;
    }
    

}