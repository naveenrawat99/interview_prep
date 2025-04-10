#ifndef FACTORY_CLASS_H
#define FACTORY_CLASS_H

#include "Toys.cpp"

class FactoryClass
{
  public:

  static Toy* createToy(int );
};

   Toy * FactoryClass::createToy(int num)
  {
    Toy *toy = nullptr;

    switch(num)
    {
      case 1: toy = new Bike();
       break;

       case 2: toy = new Car();
       break;

       case 3: toy = new Plane();
       break;

       default:
       cout<<"value is invalid"<<endl;
       return nullptr;
    }

    toy->PrepareParts();
    toy->combineParts();
    return toy;
  }




#endif
