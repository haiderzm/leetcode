class Solution {
public:
    bool isOpening(char c){
        return c == '(' || c == '[' || c == '{' ;
    }
    bool isMatching(char a, char b){
        return (a == '(' and b == ')') || (a == '[' and b == ']') || (a == '{' and b == '}');
    }
    bool isValid(string s) {
        stack<char> stk;
        cout << s.length() << endl;
        for(int i=0; i<s.length(); ++i){
            // cout << i << endl;
            if(isOpening(s[i])){
                cout << s[i];
                stk.push(s[i]);
            }else{
                // cout << s[i];
                if(stk.empty()){
                    return false;
                }
                else if(!isMatching(stk.top(),s[i])){
                    return false;
                }else{
                    cout << s[i];
                    // cout << stk.top();
                    stk.pop();
                    cout << stk.empty();
                }
            }
        }
        
        return stk.empty();
    }
};