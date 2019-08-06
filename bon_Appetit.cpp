#include<bits/stdc++.h>
using namespace std;
//question----------bon Appetit i.e Difference in Bill
//link--------------https://www.hackerrank.com/challenges/bon-appetit/problem
void bonAppetit(vector<int> bill, int k, int b) {
int sum=0;
for(int i=0;i<bill.size();i++){
    sum+=bill[i];
}
sum-=bill[k];
sum/=2;
b-=sum;
if(!b){
    cout<<"Bon Appetit"<<endl;
}
else
cout<<"difference in bill is"<<b<<endl;

}

int main(){
	
	int n,x,temp,k,b;
	vector <int> v;
	cout<<"Enter how many times you have to enter"<<endl;
	cin>>n;
	while(n--){
		cout<<"Enter array size"<<endl;
		cin>>x;
		while(x--){
			cin>>temp;
			v.push_back(temp);
		}
		cout<<"Enter k value"<<endl;
		cin>>k;
		cout<<"Enter b value"<<endl;
		cin>>b;
		bonAppetit(v,k,b);
		
	}
	
}
