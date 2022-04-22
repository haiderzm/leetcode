class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        
        unordered_map<char, int> map;
        
        for(int i=0; i<s.length();++i){
            if (map.find(s[i]) == map.end()){
                map[s[i]] = 1;
            }else{
                map[s[i]] += 1;
            }
        }
        
        for(int i=0; i<t.length();++i){
            if (map.find(t[i]) == map.end()){
                map[t[i]] = 1;
            }else{
                map[t[i]] -= 1;
            }
        }
            
        for (auto itr = map.begin(); itr != map.end(); itr++)
        {
            if(itr->second != 0)
                return false;
            cout << itr->first << "  " << itr->second << endl;
         }
        return true;    
    }
};