GFG PRACTICE !!

GFG PRACTICE !!
class Solution {
  public:
    string reverseWords(string &s) {
        string answer="";
        string curr="";
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='.' && curr!="")
            {
                if(answer=="")
                    answer.insert(0,curr);
                else
                    answer.insert(0,curr+'.');
                curr="";
            }
            else if(s[i]!='.')
            {
                curr+=s[i];
            }
            i++;
        }
        if(answer=="" && curr!="")
            answer.insert(0,curr);
        else if(answer!="" && curr!="")
            answer.insert(0,curr+'.');
        return answer;
    }
};