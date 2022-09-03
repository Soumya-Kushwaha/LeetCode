class Solution {
public:
    string interpret(string command) {
        int size =command.length();
        string ans;
        
        for (int i=0; i<size; ){
            
            if (command[i] == 'G'){
                ans += "G"; 
                i += 1;
            }
            
            else if (command[i + 1] == ')' ){ 
                ans += "o"; 
                i += 2;
            }
            
            else{ 
                ans += "al"; 
                i += 4;
            }
        }
        return ans;
    }
};