/*1021. Remove Outermost Parentheses*/
/*Brute Force using Stack*/
/*string removeOuterParentheses(string s) {
        string res="";
        stack<char>st;
        for(char c:s)
        {
            if(c=='(')
            {
                if(!st.empty())
                {
                    res.push_back(c);
                }
                st.push(c);
            }
            else{
                st.pop();
                if(!st.empty())
                {
                    res.push_back(c);
                }
            }
        }
        return res;
    }*/
/*Optimal approach*/
// string removeOuterParentheses(string s) {
//         string res="";
//         int count=0;
//         for(char c:s)
//         { 
//            if(c=='(')
//            {
//              if(count>0){res.push_back(c);}
//              count++; 
//            }
//            else
//            {
//               count--;
//               if(count>0){res.push_back(c);}
//            }
//         }
//         return res;
//     }   

/*151. Reverse Words in a String*/
/*Approach 1*/
// string reverseWords(string s) {
//         vector<string>words;
//         string curw;
//         string res="";
//         for(char c:s)
//         {
//             if(c!=' ')
//             {
//                 curw.push_back(c);
//             }
//             else if(!curw.empty()){
//                words.push_back(curw);
//                curw="";
//             }
//         }
//         if(!curw.empty()) words.push_back(curw);
//         reverse(words.begin(),words.end());
//         for(int i=0;i<words.size();i++)
//         {
//             res.append(words[i]);
//             if(i<words.size()-1){
//                 res.append(" ");
//             }
//         }
//         return res;
//     }

/*Approach 2*/
/*reverse(s.begin(),s.end());
       string ans="";
       for(int i=0;i<s.length();i++)
       {
          string word="";
          while(i<s.length() && s[i]!=' ')
          {
            word+=s[i];
            i++;
          } 
          reverse(word.begin(),word.end());
          if(word.length()>0)
          {
            ans+=" "+word;
          }
       }
       return ans.substr(1);
    }*/

/*14. Longest Common Prefix approach 1*/
/*string longestCommonPrefix(vector<string>& strs) {
       string prefix=strs[0];
       for(int i=1;i<strs.size();i++)
       {
          int j=0;
         while(j<prefix.size() && j<strs[i].size() && prefix[j]==
         strs[i][j])
         {
            j++;
         }
         prefix=prefix.substr(0,j);

         if(prefix.empty()){return "";}
       }
       return prefix;
    }*/

/*Approach 2 sorting and comparing the first and last element*/
/*string longestCommonPrefix(vector<string>& strs) {
      int n=strs.size();
      sort(strs.begin(),strs.end());
      string first=strs[0];
      string last=strs[n-1];
      int i=0;
      while(i<first.size() && i<last.size() && first[i]==last[i])
      {
        i++;
      }
      return first.substr(0,i);
    }*/

/*796. Rotate String Approach-1*/
/*bool rotateString(string s, string goal) {
        int n=s.size(), m=goal.size();
        if(n!=m){return false;}
        for(int ror=1;ror<=n;ror++)
        {
           string res(n,' ');
           for(int i=ror;i<n;i++)
           {
             res[i-ror]=s[i];
           }
           for(int i=0;i<ror;i++)
           {
             res[n-ror+i]=s[i];
           }
           if(res==goal)
           {
             return true;
           }
        }
        return false;
    }*/
   /*Approach-2 optimal solution*/
/*bool rotateString(string s, string goal) {
       return  s.size()==goal.size() && (s+s).find(goal)!=-1;
    }*/

/*242. Valid Anagram bruteForce Approach using sort*/
/*bool isAnagram(string s, string t) {
      if(s.size()!=t.size()){return false;}
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       if(s==t)
       {
         return true;
       }
       return false;
    }*/

/*Better Approach*/
/*bool isAnagram(string s, string t) {
      if(s.size()!=t.size()){return false;}
      unordered_map<char,int>m1,m2;
      for(int i=0;i<s.size();i++)
      {
        m1[s[i]]++;
      }
      for(int i=0;i<t.size();i++)
      {
        m2[t[i]]++;
      }
      return m1==m2;
    }*/

/*Optimal Appproach*/
/*bool isAnagram(string s, string t) {
      if(s.size()!=t.size()){return false;}
      vector<int>freq(26,0);
      for(int i=0;i<s.size();i++)
      {
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
      }
      for(int count:freq)
      {
        if(count!=0){return false;}
      }
      return true;
    }*/
  
/*451. Sort Characters By Frequency Approach 1 using sort function*/

  /*string frequencySort(string s) {
        string res="";
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        vector<pair<char,int>>vec(freq.begin(),freq.end());

        sort(vec.begin(),vec.end(),[](auto &a, auto &b) {
              return a.second > b.second;
        });
        for(auto &i:vec)
        {
            res.append(i.second,i.first);
        }
        return res;
    */

/*Approach-2 without sort function*/
/*string frequencySort(string s) {
        string res="";
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        vector<vector<char>>bucketdata(s.size()+1);
        for(auto[ch,fq]:freq){
            bucketdata[fq].push_back(ch);
        }
        for(int i=s.size();i>=1;i--)
        {
            for(char ch:bucketdata[i])
            {
                res.append(i,ch);
            }
        }
        return res;
    }*/

/*1614. Maximum Nesting Depth of the Parentheses*/
/*int maxDepth(string s) {
     string res="";
      int count=0,maxcount=0;
        for(char c:s)
        { 
           if(c=='(')
           {
             count++; 
             maxcount=max(count,maxcount);
           }
           else if(c==')')
           {
              count--;
           }
           else{
             continue;
           }
        }
        return maxcount;   
    }*/