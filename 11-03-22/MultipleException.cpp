#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout<<"ENter num1\n";
    cin>>n1;
    cout<<"ENter num2\n";
    cin>>n2;
    try{
        if(n2>n1){
            float div = (float)n1/n2;
            if(div<1){
                throw 'e';
            } 
            cout<<"n1/n2="<<div<<endl;
        }else{
            throw n2;
        }
    }
        catch(int x){
            cout<<"\n";   
        }
        catch(char e){
            cout<<"division is less than zero\n";
        }
        catch(...){
            cout<<"Unkwnow error\n";
        }
}