class Solution {
public:
    string convertToTitle(int n) {
        string ansstring="";
        char letter;
      
       
        while (n>0)
        {
            int remainder=n%26;
            if (remainder==0) 
                letter='Z';
            else
                letter=remainder-1+'A';
                
            ansstring.insert(0,1,letter);
            
            n=n/26;
            if (remainder==0) n--;
        }
        return ansstring;
    }
};