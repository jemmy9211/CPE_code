#include<iostream>
using namespace std;
int main(){
	int n,m,y,c,f;
	string s;
	cin  >> n;
	while(n--){
		cin>>m>>y>>c>>s;
		f=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='M'){
				m=m-1;
			}else if(s[i]=='Y'){
				y=y-1;
			}else if(s[i]=='C'){
				c=c-1;
			}else if(s[i]=='R'){
				m=m-1;
				y=y-1;
			}else if(s[i]=='B'){
				m=m-1;
				y=y-1;
				c=c-1;
			}else if(s[i]=='G'){
				y=y-1;
				c=c-1;
			}else if(s[i]=='V'){
				m=m-1;
				c=c-1;
			}else if(s[i]=='W'){
				m=m-0;
			}
			
			if(m<0 || y<0 || c<0){
				cout << "NO" << endl;
				f=1;
				break;
			}
		}
		if(f==0){
			cout << "YES " << m << " " << y << " " << c << endl;
		}
		
	}
	return 0;
}

