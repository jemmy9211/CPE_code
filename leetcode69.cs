public class Solution {
    public int MySqrt(int x)
    {
        int i = 1;

        while (i < x / i)
            i++;

        if (i > x / i) return --i;
        else return i;
    }
}
