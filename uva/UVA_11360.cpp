#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,t1,n,op,a,b;
	string s;
	cin>>t;
	t1=1;
	while(t--){
		cin>>n;
		int m[n][n],rc[n];
		while (getchar() != '\n')
            ;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				m[i][j]=getchar()-'0';
			}
			while (getchar() != '\n')
    		;
		}
		cin>>op;
		while(op--){
			cin >> s;
			if(s=="inc"){
				for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						m[i][j]=m[i][j]+1;
						if(m[i][j]==10){
							m[i][j]=0;
						}
					}
				}
			}else if(s=="dec"){
				for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						m[i][j]=m[i][j]-1;
						if(m[i][j]==-1){
							m[i][j]=9;
						}
					}
				}
			}else if(s=="transpose"){
				int tm[n][n];
				for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						tm[i][j]=m[j][i];
					}
				}
				for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						m[i][j]=tm[i][j];
					}
				}
				
			}else if(s=="row"){
				cin>>a>>b;
				for(int i=0;i<n;i++){
					rc[i]=m[a-1][i];
					m[a-1][i]=m[b-1][i];
					m[b-1][i]=rc[i];
				}
				
				
			}else if(s=="col"){
				cin>>a>>b;
				for(int i=0;i<n;i++){
					rc[i]=m[i][a-1];
					m[i][a-1]=m[i][b-1];
					m[i][b-1]=rc[i];
				}
			} 
			
		}
		cout << "Case #" << t1 << endl; 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<< m[i][j];
			}
			cout << endl;
		}
		cout << endl;
		t1++;
	}
	return 0;
}

