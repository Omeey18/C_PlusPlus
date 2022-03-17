#include<iostream>

using namespace std;

class shape
{
    protected:
    float x;
   public:   
    void getData()
   {
      cin>>x;
   }
   virtual float cal()=0;

};

class square: public shape
{
   public:
   float cal(){
      return x*x; 
   }
};

class circle: public shape
{
   public:
   float cal(){
      return 3.14*x*x; 
   }
};


int main(){
    square s1;
    circle c1;
   
    shape *ptr;
    ptr = &s1;
    ptr->getData();
    cout<<ptr->cal()<<endl;

    ptr = &c1;
    ptr->getData();
    cout<<ptr->cal();

}