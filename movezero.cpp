///Given an array arr[] of N positive integers. Push all the zeros of the given array to the right end of the array while maitaining the order of non-zero elements.
#include <iostream>
using namespace std;
class Solution
{
  public:
    void pushZerosToEnd(int arr[], int n)
    {
	    // code here
	     int temp[n];

       int i=0;
       while (i<n)
      {
      /* code */
        if(arr[i]==0)
        {
          if(i!=0)
          {
            copy(arr,arr+i,temp);
            copy(arr+1+i,arr+n,temp+i);
            temp[n-1]=arr[i];
          }
        else{
           copy(arr+1,arr+n,temp);
            temp[n-1]=arr[i];
          }
        }
          i++;


	     copy(temp,temp+n,arr);
	   }
   }
};

int  main()
{

    int n , l;
    cin >> n;
    int arr[n];
    for(l=0;l<n;l++)
    {
      cin>>arr[l];
    }
    Solution ob;
    ob.pushZerosToEnd(arr,n);
    cout<<"\n";
    for(l=0;l<n;l++)
    {
      cout<<arr[l]<<" ";
    }
    cout<<"\n";

  return  0;
}
