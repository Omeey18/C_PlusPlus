#include <iostream>
//#include<exception>
using namespace std;

int main()
{
    int number,divisitor, ans;
    number=10;
    cin>>divisitor;
    try
    {
        if(divisitor==0){
            throw divisitor;
        }else
            ans=number/divisitor;
    }
    catch(int x)
    {
        cout<<"divide by zero hai...\n";
    }
    
    cout<<"Result"<<ans;
    return 0;
}