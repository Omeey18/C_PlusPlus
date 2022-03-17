#include <iostream>

using namespace std;

int main()
{
    int n1;
    cout<<"ENter num1\n";
    cin>>n1;
    
    try{
        if(n1==1)
            throw n1;
        else if(n1==2)
            throw 'A';
        else if(n1==3)
            throw 4.5;
    }
        catch(int x){
            cout<<"Integer\n";   
        }
        catch(char e){
            cout<<"Char\n";
        }
        catch(double c){
            cout<<"Float\n";
        }
        catch(...){
            cout<<"Unkwnow error\n";
        }
}
//if we throw something without catch then this will show.
// terminate called after throwing an instance of 'double'
// Aborted (core dumped)