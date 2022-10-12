class Solution {
public:
    int minMoves(int target, int max) {
        if (max == 0)
            return target - 1;
        
        int count = 0;

        while (target != 1){
            if (target % 2 == 0 && max != 0){
                target /= 2;
                max--;
            }
            else
                target -= 1;
            count++;
        }
        
        return count;
    }
};

/*
int minMoves(int target, int maxDoubles) {
        if(target==1)   return 0;
        if(maxDoubles==0)
            return target-1;
        if(target%2)
            return minMoves(target-1, maxDoubles)+1;
        else
            return minMoves(target/2, maxDoubles-1)+1;
    }
*/