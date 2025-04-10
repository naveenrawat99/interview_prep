#ifndef TOY_H
#define TOY_H

#include <iostream>

using namespace std;

class Toy
{

  public:
   virtual void PrepareParts() =0;
   virtual void showProducts() =0;
   virtual void combineParts() =0;

};


class Bike : public Toy
{

  public:

    Bike()
    {cout<<"Bike constructor"<<endl;}
    ~Bike()
    {cout<<"Bike Destructor"<<endl;}

    void combineParts()
    {
      cout<<"running from Combine Bike : Toy"<<endl;
    }
    void showProducts()
    {
      cout<<"running from showProduct Bike : Toy"<<endl;
    }
    void PrepareParts()
    {
      cout<<"running from PrepareParts Bike : Toy"<<endl;
    }
};

class Car : public Toy
{

  public:

    Car()
    {cout<<"Car constructor"<<endl;}
    ~Car()
    {cout<<"Car Destructor"<<endl;}

    void combineParts()
    {
      cout<<"running from Combine Car : Toy"<<endl;
    }
    void showProducts()
    {
      cout<<"running from showProduct Car : Toy"<<endl;
    }
    void PrepareParts()
    {
      cout<<"running from PrepareParts Car : Toy"<<endl;
    }
};

class Plane : public Toy
{

  public:

    Plane()
    {cout<<"Plane constructor"<<endl;}
    ~Plane()
    {cout<<"Plane Destructor"<<endl;}

    void combineParts()
    {
      cout<<"running from Combine Plane : Toy"<<endl;
    }
    void showProducts()
    {
      cout<<"running from showProduct Plane : Toy"<<endl;
    }
    void PrepareParts()
    {
      cout<<"running from PrepareParts Plane : Toy"<<endl;
    }
};


#endif
