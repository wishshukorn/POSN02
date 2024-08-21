// stack maing function /* not done */

#define STACKSIZE 100
struct stack{
    int top;
    int item[STACKSIZE];
};

struct stack s;

int isEmpty(struct stack *ps){
    if(ps -> top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct )