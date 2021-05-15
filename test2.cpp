#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n;
    cin>>n;
    int c=0;
    for(long long int j=1;j<10;j++)
    {
      for(long long int i=j;i<=n;)
      {
        c++;
        i=i*10+j;
      }
    }
    cout<<c<<endl;
  }
}