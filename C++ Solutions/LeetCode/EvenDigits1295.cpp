class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int num:nums){
            if(even(num)){
                count++;
            }
        }
        return count;
    }
bool even( int num){
    int numberOfDigits=digit(num);
    return numberOfDigits%2==0;
}
int digit(int num){
    if(num<0){
        num=num*-1;
    }
    if(num==0){
        return 0;
    }
    int count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    return count;
} 
};