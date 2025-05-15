class Solution {
    private:
    vector< int>ans;
    deque<long long int> d;
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        //first k window
        for(int i=0;i<k;i++){
            if(arr[i]<0){
                d.push_back(i);
            }
        }
        if(d.empty()){
            ans.push_back(0);
        }
        else{
            ans.push_back(arr[d.front()]);
        }
        
        //remaining k window
        for(int i=k;i<arr.size();i++){
            //deletion from dequeue
            if(!d.empty() && (i - d.front())>=k){ //this formula is to always make only k window indexes are in d
                d.pop_front(); //if i do pop_back it wont run
            }
            //addition in k window
            if(arr[i]<0){
                d.push_back(i);
            }
            //storing 
            if(d.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(arr[d.front()]);
            }
        }
        return ans;
    }
};
