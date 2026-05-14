#include <iostream>

using namespace std;

class Node 
{
public:
  int data;
    Node *next;

    Node() 
    {
        next = NULL;
    }
};

// Stack class
class stack 
{
private:
    Node *top;

