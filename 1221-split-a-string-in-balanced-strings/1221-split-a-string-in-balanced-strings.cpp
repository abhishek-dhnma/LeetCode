class Solution {
public:
    int balancedStringSplit(string s) {
        
        int counter = 0;
    int res = 0;
    
    for(size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == 'R')
        {
            counter++;
        }
        else
        {
            counter--;
        }
        
        if(counter == 0)
        {
            res++;
        }
    }

    return res;
        
    }
};