//
//  StackOPlates.cpp
//  InterviewPrep
//
//  Created by Jacqueline Dagdigian on 5/12/20.
//  Copyright © 2020 Jacqueline Dagdigian. All rights reserved.
//
#include "Stack.hpp"
#include <vector>
#include <iostream>

int main(int argc, const char * argv[]) {
    
    
    int totalItems = 0;
    int totalNumOfStacks = ceil(totalItems/MAXSTACK);
    
    int input = 0;
    int data;
    
    vector<Stack> masterStack;
    //master stack is a stack of stacks
    //create a stack and push onto master stack
    //once sub stack height = 5, create another stack and push onto master stack
    
    while(input != -1)
    {
        cout << "(1) Push\n(2) Peek\n(3) Pop\n(4) isEmpty\nChoose command: ";
        cin >> input;
        if(input == 1)
        {
            cout << "Enter int to push onto stack: ";
            cin >> data;
            
            if(masterStack.empty() || !masterStack.back().push(data))
            {
                masterStack.push_back(Stack());
                masterStack.back().push(data);
            }
            cout << "pushed " << data << endl << endl;

        }
        else if(input == 2)
        {
            cout << masterStack.back().peek() << endl << endl;
        }
        else if(input == 3)
        {
            int popped = masterStack.back().pop();
            
            if(popped == -1)
            {
                masterStack.pop_back();
                masterStack.back().pop();
            }
            if(masterStack.back().peek() == -1)
            {
                masterStack.pop_back();
            }
            
            cout << "Popped " << popped << endl << endl;
        }
        else if(input == 4)
        {
            if(masterStack.empty())
            {
                cout << "Empty\n\n";
            }
            else
            {
                cout << "Not empty\n\n";
            }
        }
    }
    
    return 0;
}

