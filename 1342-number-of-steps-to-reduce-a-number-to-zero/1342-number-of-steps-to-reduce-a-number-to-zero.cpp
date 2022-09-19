class Solution {
public:
    int numberOfSteps(int num) {
        
       //Bit manipulation
        
        int count=0;
        if(!num)    return 0;
        while(num){
            count+= (num & 1) ? 2:1 ;
            num>>=1;
        }
        return count-1;

    }
};


