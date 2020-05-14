//
//  Stack.hpp
//  CTCI_3_3
//
//  Created by Jacqueline Dagdigian on 5/14/20.
//  Copyright © 2020 Jacqueline Dagdigian. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <cmath>

using namespace std;

#define MAXSTACK 5
#define MAXPLATES 100

class Stack {
    int top;

    
public:
    int a[MAXSTACK]; // Maximum size of Stack
   
    Stack() { top = -1; }

    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    
};

#endif /* Stack_hpp */
