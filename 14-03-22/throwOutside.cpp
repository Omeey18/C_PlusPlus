#include <iostream>

using namespace std;

void Xtest(int test){
    cout<<"Inside Xtest, test is: "<<test<<"\n";
    if(test) throw test;
};

int main()
{
    int temp =0;
    cout<<"Start\n";
    try{
        cout<<"Inside try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);//skipped
        //Here, Xtest(1) function throws
        //integer text,So catch block will be executed, But after that, control will be at after block, so Xtest(2) won't be executed
        temp=2;
    }
    catch(int i){
        cout<<"Caught Exception value is:";
        cout<<i<<endl;
    }
    cout<<"End";
    return 0;
}