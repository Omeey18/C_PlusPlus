#include <iostream>
#include<map>
using namespace std;

int main()
{
   map<char,int> m;
   int i;

   for(int i=0;i<122;i++)    
        m.insert(pair<char, int>('A'+i,65+i));
    char ch;
    cout<<"Enter alphabet: ";
    cin>>ch;
    map<char,int>::iterator p;
    p = m.find(ch);
    if(p!= m.end())
        cout<<"It's ASCII value is "<<p->second<<endl;
    else    
        cout<<"Key not in map.\n";
    return 0;
}