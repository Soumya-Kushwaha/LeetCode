class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int n = students.size();
        int circularStu = 0, squareStu = 0, remStudents = n;
        
        for (int i=0; i<n; i++){
            if (students[i] == 0)
                circularStu++;
            
            else 
                squareStu++;
        }
        
        for (int i=0; i<n; i++){
            
            if (sandwiches[i] == 0){
                if (circularStu > 0)
                   circularStu--;
                
                else return remStudents;
            }
            
            else{
                if (squareStu > 0)
                    squareStu--;
                
                else return remStudents;
            }
            
            remStudents--;
        }
        return 0;
    }
};