//Given an array arr[] sorted in ascending order of size N and an integer K.
//Check if K is present in the array or not.

#include <iostream>
using namespace std;

class Solution
{
  public:
  int searchInSorted(int arr[],int n,int k)
  {
    int flag=-1;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==k)
      {
        flag=1;
        break;
      }
    }
    return flag;
  }
};

int main()
{
  int n,k;
  cin>>n>>k;

  int arr[n];
  for(int i=0; i<n;i++)
  {
    cin>>arr[i];
  }
  Solution ob;
  cout<<ob.searchInSorted(arr,n,k)<<endl;
  return 0;
}
