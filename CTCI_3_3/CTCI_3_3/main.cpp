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

int main(int argc, const char * argv[])
{
    int input = 0;
    int data;
    
    vector<Stack> masterStack;

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
                cout << "Created stack " << masterStack.size() << endl;
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
            int size = masterStack.size();
            
            if(popped == -1)
            {
                masterStack.pop_back();
                masterStack.back().pop();
                cout << "Removed stack " << size << endl;
            }
            if(masterStack.back().peek() == -1)
            {
                masterStack.pop_back();
                cout << "Removed stack " << size << endl;
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

