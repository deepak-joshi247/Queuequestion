class Solution {
  public:
    string FirstNonRepeating(string &s) {
        queue<char> q;
        map<char, int> m;
        string ans = "";
        for(int i = 0;i<s.length();i++){
            char ch = s[i];
            m[ch]++;
            q.push(ch);
            while(!q.empty()){
                if(m[q.front()]>1){
                    q.pop();
                }
                else{
                    ans.push_back(q.front());
                    break;
                }
            }
            if(q.empty()){
                ans.push_back('#');
            }
        }
        return ans;
    }
};
