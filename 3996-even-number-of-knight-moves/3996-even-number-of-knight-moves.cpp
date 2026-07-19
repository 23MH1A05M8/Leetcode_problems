class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int startSum=start[0]+start[1];
        int targetSum=target[0]+target[1];
        if(startSum%2==targetSum%2)
        {
            return true;
        }
        return false;
    }
};