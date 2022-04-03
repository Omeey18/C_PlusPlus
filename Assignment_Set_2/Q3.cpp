#include <iostream>
#include<cstring>
using namespace std;

//store count of occurence '01' in sub-string 
int ans=0;
int total =0;


//check string for any occurence of '01'
void check(string inp, int len){
    string temp;
    for(int i=0;i<len;i++){
        //make 2 char sub string 
        temp = inp.substr(i,2);
        
        //check '01' is there or not
        if(temp=="01"){
            ans++;
        }
    }
}

int main()
{
    string inp;
    cin>>inp;
    int len = inp.length();


    //first check any '01' in actual string 
    check(inp,len);
    cout<<"Actual str "<<inp<<": "<<ans<<endl;
    total+=ans;
    ans=0;

    //swaping same parity index and checking 
    //occurence of '01'
    for(int i=0;i<len-2;i++){
        for(int j=i+2;j<len;j++){
            string temp = inp;
            char x;
            //swaping 
            x = temp[i];
            temp[i] = temp[j];
            temp[j] = x;

            //it will make sure that substring is 
            //not same as actual string 
            //ensure that there is no duplicate sub string 
            if(temp!=inp){
                check(temp,len);
                cout<<"Sub Str "<<temp<<": "<<ans<<endl;
                total+=ans;
                ans=0;
            }
        }
    }
    //print count of found '01' from all
    //sub-string also  
    cout<<"\nTotal occurence: "<<total<<endl;
    return 0;
}