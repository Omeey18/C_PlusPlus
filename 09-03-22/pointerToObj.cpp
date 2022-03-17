#include <iostream>  
using namespace std;  

class Demo{
    int i;
    public:
        Demo(int x){
            i=x;
        }
        int getdata(){
            return i;
        }
};

int main(){
    Demo d[3]={55,66,77};
    Demo *ptr=d;
    for(int i=0;i<3;i++){
        cout<<ptr->getdata()<<endl;
        ptr++;
    }
}