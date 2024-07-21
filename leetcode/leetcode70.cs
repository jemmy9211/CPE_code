public class Solution {
    public int ClimbStairs(int t) {
        if(t==0) return 0;
        if(t==1) return 1;
        if(t==2) return 2;
        
        int a,b,c;
        a=1;
        b=2;
        c=0;
        for(int i=2;i<t;i++){
            c=a+b;
            a=b;
            b=c;
        }
        
        return c;
    }
}
