#include <iostream>
using namespace std;
/*
https://leetcode.com/submissions/detail/735834381/
*/
class Solution {
public:
    int value (char r ){
        if (r == 'I')
            return 1;
        if (r == 'V')
            return 5;
        if (r == 'X')
            return 10;
        if (r == 'L')
            return 50;
        if (r == 'C')
            return 100;
        if (r == 'D')
            return 500;
        if (r == 'M')
            return 1000;

        return -1;
    }
    int romanToInt(string s) {
        int res = 0;
        for(int i =0;i<s.length(); i++){
            
            int str1=value(s[i]);
            
            if(i+1<s.length()){
                
                int str2=value(s[i+1]);
                
                if(str1>=str2){
                    res=res+str1;
                }
                
                else{
                    res=res+str2-str1;
                    i++;
                }
                
            }
            
            else{
                res=res+str1;
            }
            
        }
        return res;
    }
};


int main() {
	Solution sol;
	string str;
	cin>>str;
	
	cout<<sol.romanToInt(str);
	return 0;
}