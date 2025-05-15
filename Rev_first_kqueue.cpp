class Solution {
private:    
      queue<int> d;
      stack<int> st;
      int store;
      int n;
public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        n = q.size();
        if(k>n){
            return q;
        }
        for(int i=0;i<k;i++){
            store = q.front();
            q.pop();
            st.push(store);
        }
        for(int i=0;i<n;i++){
            if(!st.empty()){
                store = st.top();
                st.pop();
                d.push(store);
            }
            else{
                store = q.front();
                q.pop();
                d.push(store);
            }
            
        }
        return d;
    }
};
