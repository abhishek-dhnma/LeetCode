class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char , int> map;
        
        for(int i=0; i < jewels.length(); i++){
            map[jewels[i]] = true;
        }
        int c = 0;
        for(int i=0; i < stones.length(); i++){
            if(map.find( stones[i] ) != map.end()){
                c++;
            }

        }
        return c;
        
    }
};