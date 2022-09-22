#Power of no
Given a no. x, find its power to y


#include<bits/stdc++.h>
uisng namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)
#define endl "\n"

int find_power(int x, int y)
{ 
    if(y==0)
      return 1;
    return x * find_power(x,y-1);
}

int main()
{
  int x,y;
  cin>>x>>y;
  
  int power = find_power(x,y);
  cout<<power<<endl;
 return 0;
}
