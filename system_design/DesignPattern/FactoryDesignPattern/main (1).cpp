#include <iostream>
#include <string>
#include <string.h>

#include "Toys.cpp"
#include "Factory_Class.cpp"

using namespace std;

int main()
{
  cout<<"hello world"<<endl;
  int type = 0;

  while(true)
  {
   cout<<"Enter any number {1,3} and 0 for exit"<<endl;
   cin>>type;

   if(!type)
     break;

   else if(type < 4 && type > 0)
   {
   Toy *toy = FactoryClass::createToy(type);
     if(!toy)
      toy->showProducts();
   delete toy;

   }
  }
 cout<<"exit";
  return 0;
}

