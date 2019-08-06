#include<bits/stdc++.h>
using namespace std;
//submitted by Tushar Ansal
//question-------Day of The Programmer
//link-----------https://www.hackerrank.com/challenges/day-of-the-programmer/problem

string dayOfProgrammer(int year) {
string s;
if(year>=1700 && year<1918){
    if(year%4!=0){
        s="13.09."+to_string(year);
    }
    else{
        s="12.09."+to_string(year);
    }
}
else if(year==1918){
    s="26.09.1918";
   
}
else{
     if(year%400==0){
         s="12.09."+to_string(year);
     }
     else if(year%4==0 && year%100!=0){
         s="12.09."+to_string(year);
     }
    else{
        s="13.09."+to_string(year);
       
    }
}

return s;
}


int main(){
	int n;
	cin>>n;
	while(n--){
		int year;
		string s;
		s=dayofProgrammer(year);
		
	}
}
