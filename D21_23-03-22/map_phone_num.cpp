#include <iostream>
#include<map>
#include<cstring>
using namespace std;

class name{
    char str[40];
    public:
        name(){
            strcpy(str,"");
        }
        name(char *s){
            strcpy(str,s);
        }
        char *get(){
            return str;
        }
};
bool operator<(name a,name b){
    return strcmp(a.get(),b.get())<0;
}
class phoneNum{
    char str[80];
    public:
    phoneNum(){
        strcpy(str,"");
    }
    phoneNum(char *s){
        strcpy(str,s);
    }
    char *get(){
        return str;
    }
};

int main()
{
    map<name, phoneNum> directory;
    directory.insert(pair<name,phoneNum>(name("Om"),phoneNum("123423")));
    directory.insert(pair<name,phoneNum>(name("Shaswat"),phoneNum("9867")));
    directory.insert(pair<name,phoneNum>(name("Dhruv"),phoneNum("4365")));
    directory.insert(pair<name,phoneNum>(name("Het"),phoneNum("907834")));
    char str[80];
    cout<<"Enter name:";
    cin>>str;
    map<name, phoneNum>::iterator p;
    p=directory.find(name(str));
    if(p != directory.end())
        cout<<"Phone Number : "<<p->second.get()<<endl;
    else
        cout<<"Name not in dictionary\n";
    return 0;
}