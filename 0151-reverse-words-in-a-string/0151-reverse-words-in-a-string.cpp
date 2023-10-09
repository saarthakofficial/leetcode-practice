class Solution {
public:
    string reverseWords(string s)
    {
        string temp;
        int start =0; 
        int end = s.length();
        while(start<end)
        {
            while(s[start]==' ')
            {
                start++;
            }
            if(start>=end)
            {
                break; 
            }
            int x=start+1;
            while(x<end && s[x]!=' ')
            {
                x++;
            }
            string ans= s.substr(start,x-start);
            if(temp.length()== 0) temp =ans;
            else 
            temp = ans + " " + temp; 
            start=x+1;
        }
        return temp;
    }
};