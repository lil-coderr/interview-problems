class Solution {
public:
    bool isPalindrome(string s) {

        if (s.size() < 2){
            return true; 
        }
        //preprocessiing 
        string  result = "";
        for(char c : s){ 

            if (isalnum(c)) {
                result += c;
            }
            
        }

        int str_len = result.size(); 
        int halfway_point = str_len / 2 ; 
        char start ; 
        char end ; 
        for(int i =0 ; i < halfway_point ; i++ ){

            start = tolower(result[i]);
            end = tolower(result[str_len-i-1]);
     
            if (start != end ){
                return false; 
            }


        }

        return true ; 



    }
};