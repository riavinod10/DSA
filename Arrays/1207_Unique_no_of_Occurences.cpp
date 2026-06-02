class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>v;

        for(int i=0;i<arr.size();i++){
            int count=1;
            for (int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            v.push_back(count);
            i+=count-1; //-1 because the loop itself increments i
        }

        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                return false;
            } 
        }
        return true;
    }
};