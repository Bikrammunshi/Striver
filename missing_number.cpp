/*Vaibhav likes to play with numbers and he has N numbers.
One day he was placing the numbers on the playing board just to count that how many numbers he has.
He was placing the numbers in increasing order i.e. from 1 to N.
But when he was putting the numbers back into his bag, some numbers fell down onto the floor.
He picked up all the numbers but one number, he couldn't find.
Now he has to go somewhere urgently, so he asks you to find the missing number.
NOTE: Don't use Sorting
*/
#include <iostream>
using namespace std;

int missingnumber(int a[],int n);

int main()
{
    int i=0,n;
    cin>>n;
    int a[n+5];
    for(i=0;i<n-1;i++)
      cin>>a[i];

    cout<<missingnumber(a,n)<<endl;

}

int missingnumber(int A[],int N)
{
  int count=0;int sum=0;
  for(int j=0;j<N-1;j++)
  {
    sum=sum+A[j];
  }
  return ((N*(N+1)/2)-sum);
}
