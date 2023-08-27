class Solution {
public:
    int reverse(long long int x) {
        long long int rem=0LL,y;
        while(x!=0){
        y=x%10;
        x=x/10;
        rem=rem*10LL+y;
        }
       if (rem < INT_MIN || rem > INT_MAX) {
            return 0;
        }

        return static_cast<int>(rem);
        }
};