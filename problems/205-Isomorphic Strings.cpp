class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()){return false;}
        
        unordered_map<char , char > s_t;
        unordered_map<char,char> t_s;
        
        
        s_t [ s[0] ] = t[0];
        
        t_s[ t[0] ] = s[0];
            
        for(int i = 1; i < s.size(); i++){
            
        
            if (s_t.find(s[i]) != s_t.end()){
                
                if ( s_t[s[i]] != t[i]  ){ return false;}
            }
            else if ( t_s.find(t[i]) != t_s.end()){
                
                 if ( t_s[t[i] ] != s[i]  ){ return false;}
            }
            
            t_s [ t[i] ] = s[i];
            s_t [ s[i] ] = t[i];
            
            
            
            
        }
        
        
        
        return true;
    }
};