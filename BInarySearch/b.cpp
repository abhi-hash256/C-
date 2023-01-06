#Find the first occurance of a number from given stream of numbers
#Time Complexity - O(logn)
#Space Complexity -  O(n)


#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)
#define pb v.push_back
#define endl '\n'

int binary_search(vector<int>&v, int target){
    int s=0,e=v.size()-1,mid, res;
    while(s<=e){
        mid = s + (e-s)/2;
        if(v[mid] == target) { res=mid; e=mid-1; }
        else if(v[mid] > target) e = mid-1;
        else s = mid+1;
    }
    return -1;
}

int main()
{
    int n,a,target;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++){ cin>>a; pb(a); }
    
    cin>>target;
    int index = binary_search(v,target);
    if(index!=-1)
       cout<<index<<endl;
    else
       cout<<0<<endl;
}
