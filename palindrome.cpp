#include<bits/stdc++.h>
using namespace std;

bool isPalin(string A) {
    int end=A.size()-1,start=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>='A' && A[i]<='Z'){
            A[i]=A[i]-'A' +'a';
        }
    }
    while(start<A.size()){
        
        if(((A[start]>='a' && A[start]<='z')||(A[start]>='0' && A[start]<='9'))
        && ((A[end]>='a' && A[end]<='z')||(A[end]>='0' && A[end]<='9'))){
            
        if(A[start]!=A[end]){
        return 0;
        }
        start++;
        end--;
        }
        if((A[start]>'z' || A[start]<'0' || A[start]>'9' && A[start]<'a') &&
        ( A[end]>'z' || A[end]<'0' || A[end]>'9' && A[end]<'a')){
            start++;
            end--;
        }
        else if(((A[start]>='a' && A[start]<='z')||(A[start]>='0' && A[start]<='9'))
        && ((A[end]>'z')||(A[end]<'0' || A[end]>'9' && A[end]<'a'))){
           
           end--;
            
        }
        else if((A[start]>'z' || A[start]<'0' || A[start]>'9' && A[start]<'a')
        && ((A[end]>='a' && A[end]<='z')||(A[end]>='0' && A[end]<='9'))){
            start++;
            
        }
        
    }
    
    return 1;
}

int main(){
	string s;
	char ch;
	bool k;
	x:cout<<"Enter any string of your choice it can contain alphanumeric characters,space as well as special charaters like ?,/ etc"<<endl;
	getline(cin,s);
	k=isPalin(s);
	if(k){
	cout<<"yes entered string is palindrome"<<endl;
	}
	else
	cout<<"No entered string is not palindrome"<<endl;
	cout<<"do you want to continue"<<endl;
	cin>>ch;
	if(ch=='y')
	goto x;
	
}

