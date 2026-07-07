class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int handsize = hand.size();

        priority_queue<int , vector<int> , greater<int>> minheap;

        if(handsize%groupSize!=0){
            return false;
        }
        unordered_map<int , int> map;

        for(int handval : hand){
            map[handval]++;
        }
         for(auto &it : map){
            minheap.push(it.first);
         }



              while(!minheap.empty()){
         int start = minheap.top();


               for(int i =0;i<groupSize ;i++){
                int curr = start+i;

                if(map[curr]==0){
                    return false;
                }

                map[curr]--;

                if(map[curr]==0&& curr == minheap.top()){
                    minheap.pop();
                }
               }
              }
       
        return true;
    }
};