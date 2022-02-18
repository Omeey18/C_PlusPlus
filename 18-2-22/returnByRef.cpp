#include<iostream>

using namespace std;



int& max(int &x,int &y){
if(x>y){
	//x=x+1;
	return x;
}
else{
	//y=y+1;
	return y;
}
}

int main()
{

	int a,b,ans;
	cout<<"Enter 2 number: \n";
	cin>>a>>b;
	ans = max(a,b);
	cout <<"Maximum: " <<ans<<endl;
}

