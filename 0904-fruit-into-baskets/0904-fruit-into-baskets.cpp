class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket;
        int left = 0, maxCount = 0;

        for (int right = 0; right < fruits.size(); right++){
            basket[fruits[right]]++;

            while(basket.size() > 2){
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0)
                    basket.erase(fruits[left]);
                left++;
            }
            maxCount = max(maxCount, right - left + 1);
        }
        return maxCount;
    }
};