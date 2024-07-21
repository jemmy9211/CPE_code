#include<iostream>
using namespace std;
int main(){
	int n,m,tm,ts,ans=-1000000;
	cin>>n;
	while(n--){
		ans=-1000000;
		cin>>m;
		int a;
		cin>>tm;
		for(int i=1;i<m;i++){
			cin>>a;
			if((tm-a)>ans){
				ans=tm-a;
			}
			
			if(a>tm){
				tm=a;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

