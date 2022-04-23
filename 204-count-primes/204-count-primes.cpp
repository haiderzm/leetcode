class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        if(n<2)
            return 0;
        vector<int> isPrime(n,1);
        isPrime[0] = isPrime[1] = 0;
        
        for(int i=2;i<ceil(sqrt(n));i++)
        {
            if(isPrime[i]==1)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    isPrime[j] = 0;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            ans += isPrime[i];
        }
        return ans;
    }
};