#include <iostream>
#include<ctype.h>
using namespace std;

class charInput{
    public:
    string str;
    void add(char c){
        str += c;        
    }

};
class numInput : public charInput{
    public:
    void add(char c){
        if(isdigit(c))
            str += c;
    }

    string getValue(){
        return str;
    }
};

int main()
{
    numInput obj1;
    obj1.add('1');
    obj1.add('c');
    obj1.add('0');
    cout<<obj1.getValue()<<endl;
    return 0;
}