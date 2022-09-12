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
        
        /*
        //Recursive approach
        
        if(num==0)  return 0;
        if(num==1)  return 1;
        
        return numberOfSteps(num>>1) + (num%2==0 ? 1:2);
        
        
        */
        
        
        
        
        /*
        //Iterative Approach
        
        int count=0;
        while(num!=0){
            if(num%2==0)
            {
                count++;
                num/=2;
            }
            else
            {
                count++;
                num-=1;
            }
                
        }
        return count;
        */
    }
};


