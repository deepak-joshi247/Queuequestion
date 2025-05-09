   #include <bits/stdc++.h> 
    class CircularQueue{
        private:
        vector<int> arr;
        int r=0;
        int f=0;
        int size;
        int count = 0; //this is much useful than relying on r and f for empty check
        public:

        CircularQueue(int n){
        arr.resize(n, -1);
        size = n;
        }

        bool enqueue(int value){
            //normal
            //full
            if (count == size) {
                return false; // Queue is full
            }
            count++;
            arr[r]=value;
            r = (r + 1) % size; // Circular movement
            return true;

        }
        int dequeue(){ 
            //normal
            if(count == 0){
                return -1;
            }
            count--;
            int store = arr[f];
            arr[f] = -1;
            f = (f + 1) % size; // Circular movement
            return store;
            
        }
    };
