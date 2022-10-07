class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int stone_size = stones.size();
        int jewel_size = jewels.size();
        int count = 0;
        
        for(int i=0; i<stone_size; i++){
            for (int j=0; j<jewel_size; j++)
                if (stones[i] == jewels[j])
                    count++;
        }
        return count;
    }
};