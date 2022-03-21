#include <iostream>

using namespace std;

template <class T>
class Addition{
    public:
        Addition(){
            static T i = 10.5;
            cout << "value of i is: " << ++i << endl;
        }
};

int main()
{
    Addition<int> ob1;
    Addition<int> ob3;
    Addition<double> ob2;
  
    return 0;
}