//Union of two arrays can be
//defined as the common and
//distinct elements in the two arrays.
//Given two sorted arrays of
//size n and m respectively,
//find their union.
//find their intersection

#include <iostream>
using namespace std;
class Solution
{
  public:
    int n1;
    int *arr1;
    int n2;
    int *arr2;

    void input()
    {
      cout<<"Enter the size of the array1: ";
      cin>>n1;
      arr1=new int(n1);
      cout<<"Enter the data of the array1\n";
      for(int i=0;i<n1;i++)
      {
        cin>>arr1[i];
      }
      cout<<"Enter the size of the array2:";
      cin>>n2;
      arr2=new int(n2);
      cout<<"Enter the data of the array2\n";
      for(int i=0;i<n2;i++)
      {
        cin>>arr2[i];
      }
    }

    void UNION()
    {
      int n=n1+n2;
      int *un=new int(n);
      int count=0;
      for(int i=0;i<n1;i++)
      {
        un[count]=arr1[i];
        count++;
      }
      for(int i=0;i<n2;i++)
      {
        bool flag=true;
        for(int j=0;j<count;j++)
        {
          if(arr2[i]==un[j])
            flag=false;
        }
        if(flag==true)
        {
          un[count]=arr2[i];
          count++;
        }
      }
      cout<<"The union of two arrays\n";
      for(int i=0;i<count;i++)
      {
        cout<<un[i]<<endl;
      }
    }

    void INTERSECTION()
    {
      int n;
      if(n1>n2)
        n=n2;
      else
        n=n1;
      int *in=new int(n);
      int count=0;
      for(int i=0;i<n2;i++)
      {
        for(int j=0;j<n1;j++)
        {
          if(arr2[i]==arr1[j])
          {
            bool flag=true;
            for(int j=0;j<count;j++)
            {
              if(arr2[i]==in[j])
                flag=false;
            }
            if(flag==true)
            {
              in[count]=arr2[i];
              count++;
            }
          }
        }
      }
      cout<<"The intersection of two arrays\n";
      for(int i=0;i<count;i++)
      {
        cout<<in[i]<<endl;
      }
    }
};

int main()
{
  Solution obj;
  obj.input();
  obj.UNION();
  obj.INTERSECTION();
  return 0;
}
