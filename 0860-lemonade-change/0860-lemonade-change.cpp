class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> m;
        if(bills[0] == 10 || bills[0]==20) return false;

        for(int i = 0 ; i < bills.size() ; i++) {
            if(bills[i] == 5) {
                m[5]++;
            } else if(bills[i] == 10) {
                m[5]--;
                m[10]++;
                if(m[5] < 0) return false;
            } else {
                if(m[10] >= 1) {
                    m[10]--;
                    if(m[10] < 0) return false;
                    m[5]--;
                    if(m[5] < 0) return false;
                    m[20]++;
                } else {
                    m[5] -= 3;
                    if(m[5] < 0) return false;
                    m[20]++;
                }
            }
        }

        for(auto it : m) {
            if(it.second < 0) return false;
        }
        return true;
    }
};