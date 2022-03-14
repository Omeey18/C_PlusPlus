#include <iostream>

using namespace std;

class Test{
    int x;
    public:
        void read(){
            cout<<"Enter a NUmber:";
            cin>>x;
        }
        class Even{};
        class Odd{};
        void check(){
            if(x%2==0){
                throw Even();
            }else{
                throw Odd();
            }
        }
};

int main()
{
    Test t;
    t.read();
    try{
        t.check();
    }
    catch(Test::Even){
        cout<<"Number is Even";
    }
    catch(Test::Odd){
        cout<<"Number is Odd";
    }
    return 0;
}