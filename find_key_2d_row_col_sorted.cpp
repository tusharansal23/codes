#include <bits/stdc++.h>
using namespace std;
// Ques-------Given a 2D array in which all rows are sorted and all columns are sorted you have o find a key in O(m,n) time
//link--------https://practice.geeksforgeeks.org/problems/search-in-a-matrix/0
bool find(vector <vector <int> >v,int check_row,int check_col,int row,int col,int key){
    int p=0;
    for(int i=0;i<col;i++){
        if(key==v[check_row][i]){
            p=1;
            break;
        }
        
    }
    for(int i=0;i<row;i++){
        if(key==v[i][check_col]){
            p=1;
            break;
        }
    }
    return (p==1?1:0);
}
int main() {
	int n;
	cin>>n;
	while(n--){
	    int row,col,x,temp,checkrow=0,checkcol=0;
	    vector<vector <int> > v;
	    vector <int> vi;
	    cin>>row>>col;
	   
	    for(int i=0;i<row;i++){
	        vi.erase(vi.begin(),vi.end());
	        for(int j=0;j<col;j++){
	            cin>>temp;
	            vi.push_back(temp);
	        }
	        v.push_back(vi);
	    }
	    cin>>x;
	    for(int i=0;i<row;i++){
	        if(v[i][col-1]>=x){
	        checkrow=i;
	        break;
	        }
	    
	    }
	    for(int i=0;i<col;i++){
	        if(v[row-1][i]>=x){
	        checkcol=i;
	        break;
	        }
	    }
	    cout<<find(v,checkrow,checkcol,row,col,x)<<endl;
	}
	return 0;
}
