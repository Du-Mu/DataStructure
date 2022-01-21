/* S :stack
** S_top : index to the top of Stack
** S_SIZE : stack-size
** val use the UnderScoreCase
** function use the CamelCase
**/
#include <stdio.h>
#include <stdbool.h>

#define S_SIZE 255
char Stack[255] = {0};
int S_top = 0;
bool flag_underflow = false;//flag of stack underflow

bool StackEmpty();//Check whether the stack is empty
bool StackPush(char Val);//push the Val into the stack
char StackPop();//pop the Val

int main(void)
{
    return 0;
}

bool StackEmpty()
{
    if (S_top == 0)
        return true;
    else return false;
}

bool StackPush(char Val)
{
    if (S_top == S_SIZE )
        return false;
    
    Stack[S_top] = Val;
    S_top++;

    return true;
}

char StackPop()
{
    flag_underflow = false;
    if (StackEmpty())
    {
        flag_underflow = true;
        return 0;
    }
    else
    {
        S_top--;
        return Stack[S_top];
    }
}