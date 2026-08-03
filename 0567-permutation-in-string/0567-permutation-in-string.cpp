class Solution {
     bool checkEqual(int a[26] , int b[26]){
        for(int i=0; i<26; i++){
            if( a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
          //phele store krwa le count of s1
        int count1[26] = {0};
        for(int i=0; i< s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        //ab 1st window chala s2 pr same store kra kr
        int i = 0;
        int count2[26] = {0};
        int windowsize = s1.length();
        while( i<windowsize && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        //ab check kr dono equal h ya nai, if yes return 1;
        if( checkEqual(count1 , count2)){
            return 1;
        }
        //agar equal ni h to aage badh or dobara check krr
        //new wale char ko add kr orr purane wale ko delete kr
        while( i < s2.length()){
            int newChar = s2[i] - 'a';
            count2[newChar]++;

            int oldChar = s2[i - windowsize] - 'a';
            count2[oldChar]--;

            i++;
        
        //ab dobar check krr
        if( checkEqual(count1 , count2)){
            return 1;
        }
        }
        return 0;
    }
};