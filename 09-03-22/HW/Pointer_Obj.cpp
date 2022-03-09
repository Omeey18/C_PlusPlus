#include<iostream>
using namespace std;

class branch
{
   public:
   int B_code;
    void b_getdata(int x)
   {
       B_code = x;
   }
};

class student: public branch
{
   public:
   float spi;
   void s_getdata(float x){
       spi = x;
   }
   void print()
   {
      cout << "SPI: " << spi << endl;
      cout << "Branch: "<< B_code << endl;
   }
};

int main()
{
   student *ptr, s;
   ptr = &s;
   ptr->b_getdata(7);
   ptr->s_getdata(8.5);
   ptr->print();
   return 0;
}
