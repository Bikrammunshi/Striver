//Given an array arr[] of size N and an integer K, the task is to left rotate the array K indexes
#include <iostream>

using namespace std;
class Solution
{
public:
  	void leftRotate(int arr[], int k, int n)
  	{
	  int temp[n];
        for(int i=k;i>0;i--)
        {

          copy(arr+1,arr+n,temp);
          temp[n-1]=arr[0];
          copy(temp,temp+n,arr);

        }
    }
};

int main()
{
  int n;
  cin>>n;
  int k;
  cin>>k;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  Solution ob;
  ob.leftRotate(a,k,n);
  for(int i=0;i<n;i++)
  {
    cout<<"\n";
    cout<<a[i]<<" ";
  }
  cout<<"\n";
  return 0;
}
