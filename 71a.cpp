#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	while(n--)
	{
		string input;cin>>input; 
		if(len >10)	cout<<input[0]<<input.length()-2<<input[input.length()-1]<<endl;
		else cout<<input<<endl;
	}
	return 0;
}