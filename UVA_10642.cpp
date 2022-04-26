#include<iostream>
using namespace std;
int main(){
    int n,a;
   	cin >>n;
   	a=n;
    while(n--){
        int x,y,xx,yy;
        cin >> x >> y >> xx >> yy;
        if((x+y)==(xx+yy)){
            cout << "Case "<< -n+a << ": "<< xx-yy << endl;
        }else{
            int d=(xx+yy)-(x+y);
            int h=(xx+yy)+1;
            int l=(x+y)+1;
            int t=(h+l)*(d+1)/2;
            
            t=t-x-yy-1;
            cout << "Case " << -n+a << ": "<< t << endl;
        }
    }
    return 0;
}


