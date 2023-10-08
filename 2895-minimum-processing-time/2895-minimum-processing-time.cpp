class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        
        sort(tasks.begin(), tasks.end(), greater<>());
        sort(processorTime.begin(), processorTime.end());
        
        int result = 0;
        int curTask = 0;
        for (int i=0; i<processorTime.size(); i++){
            for (int task =0; task < 4; task++){
                int completionTime = tasks[curTask] + processorTime[i];
                curTask++;
                result = result > completionTime ? result : completionTime;
            }
        }
        return result;
    }
};