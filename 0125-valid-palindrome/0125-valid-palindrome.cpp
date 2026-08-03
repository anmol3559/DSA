class Solution {
    private:
    bool isValid(char ch){
         if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }
    char lowerCase(char ch){
         if( (ch >= 'a' && ch <='z') || (ch >= '0' && ch <='9')){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
   bool checkPalindrome(string s){
        int st = 0 ;
        int end = s.size()-1;
        while( st <= end){
            if( s[st] == s[end]){
            st++;
            end--;
            }
            else{
                return false;
            }
        } 
        return true;
   }
public:
    bool isPalindrome(string s) {
        //consider only 'A' or 'a' or '0'
           string temp = "";
       for( int i=0; i<s.size(); i++){
           if(isValid( s[i]) ){
            temp.push_back( s[i] );
           }
       }
        //uppercase ko lowercase me convert krna h
        for(int i=0; i<temp.size(); i++){
            temp[i] = lowerCase( temp[i] );
        }
        // is palindrome
        return checkPalindrome(temp);
    }
};