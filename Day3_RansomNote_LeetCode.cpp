 class Solution {
public:
    int present(char a, string test,int len){
        for(int j=0;j<len;j++){
            if (a==test[j])
                return j;
        }
        return -1;
    }
    bool canConstruct(string ransomNote, string magazine) {
        
        int i=0,j,len;
        char tmp;
        len=magazine.length();
        for(int i=0;ransomNote[i]!='\0';i++){
            
            j=present(ransomNote[i],magazine,len);
            if(j==-1){
                return 0;
            }
            else{
                if(len!=0){
                tmp = magazine[len-1];
                magazine[len-1]='\0';
                magazine[j]=tmp;
                }
                else{
                    return -1;
                }
                
            }
        }
        return 1;
    }
};
