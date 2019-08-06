#include<bits/stdc++.h>
using namespace std;

// Topic-------Utopian Tree
// link--------https://www.hackerrank.com/challenges/utopian-tree/problem
int utopianTree(int n) {
    int sum=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        sum*=2;
        else
        sum+=1;

    }
return sum;
}

int main(){
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		cout<<utopianTree(x)<<endl;
	}
}
