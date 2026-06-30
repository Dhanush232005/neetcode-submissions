class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp; //creates a hash map
          for(string word:strs){ //traverse evry word
            string key=word;//copy the word
            sort(key.begin(),key.end());//if we sort the word act becomes act
              mp[key].push_back(word);//[],[act->act,cat]
          }
          vector<vector<string>>ans;//create ans
          for(auto it:mp){//traverse hash map
            ans.push_back(it.second);
          }
           return ans;  
    }     
};
