#include<bits/stdc++.h>
using namespace std;

vector<vector <char> > make(int n){
	vector<vector <char> > v;
	vector <char> vi;
	int k=0;
	for(int i=0;i<n;i++){
		vi.erase(vi.begin(),vi.end());
		for(int d=n-i;d>0;d--){
			vi.push_back('*');
			
		}	
		for(int p=0;p<i;p++){
			vi.push_back(' ');
		}
			for(int p=0;p<i;p++){
			vi.push_back(' ');
		}
		for(int c=n-i;c>0;c--){
			vi.push_back('*');
		}
		v.push_back(vi);
		k++;
	}
	for(int j=0;j<n;j++){
		vi.erase(vi.begin(),vi.end());
			for(int d=j;d>=0;d--){
			vi.push_back('*');
			
		}
		for(int p=0;p<n-j-1;p++){
			vi.push_back(' ');
		}
			for(int p=0;p<n-j-1;p++){
			vi.push_back(' ');
		}
		for(int c=j;c>=0;c--){
			vi.push_back('*');
		}
		v.push_back(vi);
		k++;
	}

	return v;
}


int main(){
	int n;
	char ch;
	vector<vector <char> > v;
	x:cout<<"Enter value of n"<<endl;
	cin>>n;
	v=make(n);
	
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j];
		}
		cout<<endl;
	}
	
	cout<<"do you want to continue for YES press y else press n for NO"<<endl;
	cin>>ch;
	if(ch=='y')
	goto x;
}
