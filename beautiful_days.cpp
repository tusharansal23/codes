#include<bits/stdc++.h>
using namespace std;
//question---------Find the beautiful days
//link-------------https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
int beautifulDays(int i, int j, int k) {
    int p,z,s=0,count=0;
    while(i<=j){
     z=i;
     s=0;
     while(z>0){
         s=s*10+z%10;
         z/=10;
     }
     p=abs(i-s) %k;
     if(p==0)
     count++;
     i++;
    }
    return count;
}

int main(){
	int n,i,j,k;
	cout<<"Enter how many times you have to enter data"<<endl;
	cin>>n;
	while(n--){
		cout<<"Enter Starting point"<<endl;
		cin>>i;
		cout<<"Enter End point"<<endl;
		cin>>j;
		cout<<"Enter Divisiblity constant"<<endl;
		cin>>k;
		cout<<beautifulDays(i,j,k)<<endl;
	}
}
