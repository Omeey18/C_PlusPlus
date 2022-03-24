#include <iostream>

using namespace std;

namespace CounterNameSpace{
    int uperbound;
    int lowerbound;
    class counter{
        int count;
        public:
            counter(int n){
                if(n<=uperbound)
                    count = n;
                else 
                    count = uperbound;
            }
            void reset(int n){
                if(n<= uperbound)
                    count = n;
            }
            int run(){
                if(count>lowerbound)
                    return count--;
                else
                    return lowerbound;
            }
    };
}

int main()
{
    using namespace CounterNameSpace;
    uperbound =100;
    lowerbound = 1;
    counter ob1(10);
    int i;
    do{
        i= ob1.run();
        cout<< i << " ";
    }while(i>lowerbound);
    cout<<endl;
    counter ob2(20);
    do{
        i=ob2.run();
        cout<<i<<" ";
    }while(i> lowerbound);
    cout<<endl;
    ob2.reset(100);
    lowerbound = 91;
    do{
        i= ob2.run();
        cout<< i << " ";
    }while(i> lowerbound);
    return 0;
}