#include<bits/stdc++.h>
using  namespace std;

int compare(string x, string y)
{
    string xy=x.append(y);
    string yx=y.append(x);

    return xy.compare(yx) > 0 ? 1:0;        //just reverse the sign (<) for obtaininig the smallest number formed from array
}

int main()
{
    int arr[]={3,30,34,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<string>v;

    for(int i=0;i<n;i++)
    {
        v.push_back(to_string(arr[i]));
    }
   
   sort(v.begin(),v.end(),compare);

   for(int i=0;i<n;i++)
   cout<<v[i];
}
