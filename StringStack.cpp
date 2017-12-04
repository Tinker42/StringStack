#include <iostream>
#include "StringStack.h"

node::node(){;}

node::node(string newData, node* newNext){
  this->word=newWord;
  this->next=newNext;
}


string StringStack::pop(){
  string tops;
  if (stackTop!=nullptr){
    tops=stackTop->getWord();
    node* hold=stackTop;
    stackTop=stackTop->getNext();
    delete hold;
  }
  else {
    tops = "";
  }
  return tops;
}

void StringStack::push(string inW){
  if (stackTop==nullptr){
    stackTop=new node(inW, nullptr);
  }
  else{
    stackTop=new node(inW, stackTop);
  }
}

bool StringStack::isEmpty(){
  if (stackTop==nullptr){
    return true;
  }
  return false;
}
