#include <bits/stdc++.h>
using namespace std;

int T;
string X,Y;

int main() {
	// your code goes here
	cin>>T;
	int check=0;
	while(T--){
	    cin>>X>>Y;
	    for(int i=0;i<X.size();i++){
	        if(X[i]=='?' || Y[i] == '?')continue;
	        if(X[i]!=Y[i]) check = 1;
	    }
	    if(check==1)cout<<"No"<<endl;
	    else cout<<"Yes"<<endl;
	    check=0;
	}
	return 0;
}
