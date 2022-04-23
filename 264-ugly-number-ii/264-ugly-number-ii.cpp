class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> u_nums(n+1);
        int f2=0,f3=0,f5=0;
        u_nums[0] = 1;
        for(int i=1; i<=n; ++i){
            u_nums[i] = min(2*u_nums[f2], min(3*u_nums[f3], 5*u_nums[f5]));
            cout << i << "\t" << u_nums[i] << endl;
            if(u_nums[i] == 2*u_nums[f2])
                f2++;
            if(u_nums[i] == 3*u_nums[f3])
                f3++;
            if(u_nums[i] == 5*u_nums[f5])
                f5++;
        }
        for(int i=0; i<=n; ++i)
            cout << u_nums[i] << " ";
        return u_nums[n-1];
    }
};