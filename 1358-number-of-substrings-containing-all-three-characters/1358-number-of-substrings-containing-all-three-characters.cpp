class Solution {
public:
    int numberOfSubstrings(string s) {
       int lasta=-1,lastb=-1,lastc=-1;
       int n = s.size();
       int mini;
       int count=0;
       for(int i=0;i<n;i++){
            if(s[i]=='a'){
                lasta=i;
            }
            else if(s[i]=='b'){
                lastb=i;
            }
            else{
                lastc=i;
            }
            mini = min({lasta,lastb,lastc});
            if(mini!=-1){
                count+=mini+1;
            }
       }
       return count;
    }
};