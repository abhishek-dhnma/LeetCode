class Solution {
public:
    string reversePrefix(string str, char ch) {
        int a = -1;
        
        for(int i=0; i< str.length(); i++){
        if(ch == str[i]){
            a  = i;

            int i = 0;
    int e = a;

    //int mid = (s + (e-s)) / 2;

    while(i < e){
        swap(str[i], str[e]);
        i++;
        e--;
    }
            break;
        }
    }

    if(a == -1){
return str;
    }else{

        return str ;

    }
        
    }
};