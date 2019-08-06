#include<bits/stdc++.h>
using namespace std;
//Question---------Hurdle race
//link-------------https://www.hackerrank.com/challenges/the-hurdle-race/problem

int hurdleRace(int k, vector<int> height) {
    int max=height[0];
    for(int i=1;i<height.size();i++){
        if(max<height[i])
        max=height[i];
    }
    return (k<max?max-k:0);

}

int main(){
	int n,x,temp,k;
	vector <int> v;
	cout<<"enter no. of times you want to execute"<<endl;
	cin>>n;
	while(n--){
		cout<<"Enter no. of elements in an array"<<endl;
		cin>>x;
		while(x--){
			cin>>temp;
			v.push_back(temp);
		}
		cout<<"Enter k value"<<endl;
		cin>>k;
		cout<<"Maximum height needed is "<<hurdleRace(k,v)<<endl;
	}
}
