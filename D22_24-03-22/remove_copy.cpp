#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    char str[] = "I love CPP Nice....  bye";
    vector<char> v, v2(30);
    int i;
    for(i = 0;str[i];i++)
        v.push_back(str[i]);
    cout<<"Input squence : \n";
    for(i=0;i<v.size();i++)
        cout<< v[i];  
    cout<<endl;
    replace_copy(v.begin(),v.end(),v2.begin(),' ','_');
    cout<<"Result after removing spece : \n";
    for(i=0;i<v2.size();i++)
        cout<<v2[i];
    cout<<endl;

    return 0;
}