class Solution {
  private:
    stack<int> st;
  public:
    queue<int> reverseQueue(queue<int> &q) {
        int n = q.size();
        while(n--){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        return q;
    }
};
