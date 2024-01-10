#include<iostream> 
 
using namespace std; 
class A { 
public: 
  virtual void print() 
  { cout <<" Inside A::"; } 
}; 
 
class B : public A { 
public: 
  void print() 
  { cout <<" Inside B"; } 
}; 
 
class C: public B { 
}; 
 
int main(void) 
{ 

	C c;
 A *pointer = &c;
 pointer->print();

//  c.print(); 
 return 0; 
}