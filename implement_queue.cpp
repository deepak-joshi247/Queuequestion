#include <bits/stdc++.h> 
class Queue {
private:
    vector<int> arr;
    int rear = 0;
    int f = 0;
public:
    Queue() {       
    }
    bool isEmpty() {
       if(rear == f){
           return true;
       }
       else{
           return false;
       }
    }

    void enqueue(int data) {
       arr.push_back(data);
       rear+=1;
    }

    int dequeue() {
        if(f==rear){
            return -1;
        }
        int store = f;
        f+=1;
        return arr[store];
        
    }

    int front() {
        if(f==rear){
            return -1;
        }
        return arr[f];
    }
};
