class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0){
            return {};
        }
        if(arr.size()==1){
            return {1};
        }
        vector<int> array = arr;
        sort(array.begin(),array.end());
        unordered_map<int,int> mpp;
        mpp[array[0]] = 1;
        int count=2;
        for(int i=1;i<array.size();i++){
            if(array[i]!=array[i-1]){
                mpp[array[i]] = count;
                count++;
            }
        }
        vector<int> result;
        for(int i=0;i<arr.size();i++){
            result.push_back(mpp[arr[i]]);
        }
        return result;
    }
};