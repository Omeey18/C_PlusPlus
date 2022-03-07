#include <iostream>

using namespace std;
class manufacturer
{
   public:
   void making(){
       cout<<"Making product\n";
   }
    void sell(){
        cout<<"Manufacturer Selling product\n";
    }
};
class retailer : public manufacturer
{
public:
    void buy(){
        cout<<"Buying form manufacture..!\n";
        sell();
    }
    void sell_r(){
        cout<<"Retailer Selling product\n";
    }
};
class customer : public retailer
{
public:
    void buy_c(){
        cout<<"Buying product from retailer\n";
        sell_r();
    }
};

int main()
{
    manufacturer m1;
    retailer r1;
    customer c1;

    m1.making();
    r1.buy();
    c1.buy_c();
    c1.making();
    return 0;
}