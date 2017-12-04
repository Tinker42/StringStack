#ifndef STRINGSTACK_H
#define STRINGSTACK_H
#include "TrueStack.h"
using namespace std;

class node {
  public:
    node();
    node(string, node*);
    string getWord() {return word;}
    void setWord(string newWord) {word = newWord;}
    node* getNext() {return next;}
    void setNext(node* newNext) {next = newNext;}
  private:
    string word;
    node* next = nullptr;
};

class StringStack : public TrueStack {
  private:
    node* stackTop;
  public:
    StringStack() {stackTop = nullptr;}
    string pop();
    void push(string);
    bool isEmpty();
};


#endif
