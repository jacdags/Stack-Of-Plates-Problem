//
//  Stack.cpp
//  CTCI_3_3
//
//  Created by Jacqueline Dagdigian on 5/14/20.
//  Copyright © 2020 Jacqueline Dagdigian. All rights reserved.
//

#include "Stack.hpp"

bool Stack::push(int x)
{
    top++;
    
    if(top == MAXSTACK)
        return false;
    
    a[top] = x;
    return true;
}

int Stack::pop()
{
    if(top < 0)
    {
        return -1;
    }
    if(top == MAXSTACK)
    {
        top--;
    }
    
    int data = a[top];
    top--;
    return data;
}

int Stack::peek()
{
    if(top < 0)
    {
        return -1;
    }
    else if(top == MAXSTACK)
    {
        return a[top-1];
    }
    
    return a[top];
}

bool Stack::isEmpty()
{
    return top < 0;
}
