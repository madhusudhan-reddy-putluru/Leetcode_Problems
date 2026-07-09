class Solution {
public:
    bool isPal(string si){
        string sp  = si;
        reverse(sp.begin(),sp.end());
        return si==sp;
    }
    void getAllParts(string s,vector<vector<string>> &ans,vector<string>&str){
        if(s.size()==0){
            ans.push_back(str);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part = s.substr(0,i+1);
            if(isPal(part)){
                str.push_back(part);
                getAllParts(s.substr(i+1),ans,str);
                str.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> str;
        getAllParts(s,ans,str);
        return ans;
    }

};