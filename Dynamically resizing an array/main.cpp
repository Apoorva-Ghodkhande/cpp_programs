#include <iostream>
#include<algorithm>
#include <unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};

int main(){
    vector<string> v;
    v.insert(v.begin(),{"flower","flow","flight"});
    Solution s;
 string str=s.longestCommonPrefix(v);
 cout << str;
 return 0;
}