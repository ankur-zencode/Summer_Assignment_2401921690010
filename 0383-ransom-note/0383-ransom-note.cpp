class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> tp;

        for(char ch:magazine)   //store chars of magazine in map
            tp[ch]++;  
        
        for(char ch:ransomNote)
        {
            if(tp[ch]==0)
              return false;
            
            tp[ch]--;
        }    

        return true;
        }
};