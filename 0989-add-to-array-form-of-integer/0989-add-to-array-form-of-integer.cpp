class Solution{
public:
    vector<int> addToArrayForm(vector<int>& num, int k){
        int n = num.size() - 1;
        int carry = 0;

        while (n >= 0){
            int sum = num[n] + (k % 10) + carry;
            k /= 10;

            num[n--] = sum % 10;
            carry = sum/10;
        }

        while (k > 0){
            int sum = (k % 10) + carry;
            k /= 10;

            num.insert(num.begin(), sum%10);
            carry = sum / 10;
        }

        if (carry > 0)
            num.insert(num.begin(), carry);
        
        return num;
    }
};



/*class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        long long val = 0;
        int n = num.size();
        long long multiplier = pow(10, n-1);
        
        for(int i = 0; i < n; i++){
            val += num[i]*multiplier;
            multiplier /= 10;
        }

        val += k;
        vector<int> ans;

        while(val > 0){
            ans.push_back(val % 10);
            val /= 10;
        }
        reverse(ans.begin(), ans.end());
     
        return ans;   
    }
};*/