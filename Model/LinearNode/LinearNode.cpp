//
//  LinearNode.cpp
//  Data Structures 2.0
//
//  Created by Bravo, Sebastian on 2/22/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include "LinearNode.hpp"
#include <iostream>

using namespace std;

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode * next);
    LinearNode<Type> * getNextNode();
};
