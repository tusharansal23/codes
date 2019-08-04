#include<bits/stdc++.h>
using namespace std;

void path(int r1,int c1,int r2,int c2){
	int k,p=0;

	if(c1<=c2 && r1<=r2){
	
		k=r1;
		for(int j=c1;j<=c2;j++){
			p=0;
			cout<<k<<","<<j<<endl;
			if(k<r2){
			k++;
			p=1;
			}
		}
		if(k<r2 && p==1){
		
			for(int m=k;m<=r2;m++){
				cout<<m<<","<<c2<<endl;
			}
		}
	
	}
	else if(c1>=c2 && r1<=r2){
			k=r1;
		for(int j=c1;j>=c2;j--){
			p=0;
			cout<<k<<","<<j<<endl;
			if(k<r2){
			p=1;
			k++;
			}
		}
		if(k<r2 && p==1){
			for(int m=k;m<=r2;m++){
				cout<<m<<","<<c2<<endl;
			
			}
		}
	}
	else if(c1<=c2 && r1>=r2){
			k=c1;
		for(int j=r1;j>=r2;j--){
			p=0;
			cout<<j<<","<<k<<endl;
			if(k<c2){
			p=1;
			k++;
			}
		}
		if(k<c2 && p==1)
		for(int m=k;m<=c2;m++){
			cout<<r2<<","<<m<<endl;
		}
	}
	else if(c1>=c2 && r1>=r2){
			k=c1;
		for(int j=r1;j>=r2;j--){
			p=0;
			cout<<j<<","<<k<<endl;
			if(k>c2){
			p=1;
			k--;
			}
		}
		if(k>=c2 && p==1){
		
			for(int m=k;m>=c2;m--){
				cout<<r2<<","<<m<<endl;
			}
		}
	}
}

int main(){
	int row1,row2,col1,col2;
	char ch;
	x:cout<<"Enter the coordinates of source i.e row1 and col1"<<endl;
	cin>>row1;
	cin>>col1;
	cout<<"Enter the coordintes of destination i.e row2 and col2"<<endl;
	cin>>row2;
	cin>>col2;
	
	path(row1,col1,row2,col2);
	cout<<"do you want to continue"<<endl;
	cin>>ch;
	if(ch=='y')
	goto x;
	
}
