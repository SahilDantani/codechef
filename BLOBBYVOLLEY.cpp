#include <bits/stdc++.h>
using namespace std;

//A=server B=reciever

int t,n;
string s;

int main() {
	// your code goes here
	cin>>t;
	while(t--){
	    cin>>n>>s;
	    int check=0;
	    int ctA=0;
	    int ctB=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='A'){
	            if(check==0){
	                ctA+=1;
	            }else if(check==1){
	                check=0;
	            }
	        }
	        else if(s[i]=='B'){
	            if(check==0){
	                check=1;
	            }else if(check==1){
	                ctB+=1;
	            }
	        }
	    }
	    cout<<ctA<<" "<<ctB<<endl;
	    check=0;
	    ctA=0;
	    ctB=0;
	}
	return 0;
}
