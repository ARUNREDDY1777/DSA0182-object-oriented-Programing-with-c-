#include <bits/stdc++.h>
using namespace std;
class substring 
{
   public:
   string minWindow(string s, string x)
    {
      map <char, int> m;
      for(int i =0;i<x.size();i++)m[x[i]]++;
      int length = s.size();
      int left = 0, right = 0 , ansLeft = 0, ansRight = 0;
      int counter = x.size();
      bool flag = false;
      string ans = "";
      while(right<s.size())
	  {
         char c = s[right];
         if(m.find(c)!=m.end())
		 {
            if(m[c]>0)counter--;
            m[c]--;
         }
         while(counter == 0 && left<=right)
		 {
            if(right-left+1 <=length)
			{
               length = right-left+1;
               flag = true;
               ansLeft = left;
               ansRight = right;
            }
            if(left == right)break;
            c = s[left];
            if(m.find(c)!=m.end())
			{
               m[c]++;
               if(m[c]>0)counter++;
            }
            left++;
         }
         right++;
      }
      if(!flag)return ans;
      else
      for(int i =ansLeft;i<=ansRight;i++)ans+=s[i];
      return ans;
   }
};
main()
{
   substring ob;
   cout << (ob.minWindow("ARUNREDDYKONKALA", "AKR"));
}
