
# Check if kth bit in a number is set or not

1). Using left shift operator
    
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb v.push_back

int main()
{
  int n,k;    // n is the input no. and k if the bit to check
  cin>>n>>k;
  
  if(n&(1<<(k-1)) != 0)      // Creating a mask (a no whose kth bit is set by left shifting 1 by k-1)   
    cout<<"kth bit is set\n";
  else
    cout<<"kth bit is not set\n";
 return 0;
}


2). Using right shift operator
  
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb v.push_back

int main()
{
  int n,k;    // n is the input no. and k if the bit to check
  cin>>n>>k;
  
  if(((n>>(k-1))&1)==1)      // Shifting the kth bit of n to rightmost side and do bitwose and with 1
    cout<<"kth bit is set\n";
  else
    cout<<"kth bit is not set\n";
 return 0;
}

  
