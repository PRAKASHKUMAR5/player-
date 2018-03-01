#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a,fact=1;
  cout<<"Enter the a value :"<<endl;
  cin>>a;
  if(a<=20)
  {
  for(int i=1;i<=a;i++)
  {
      fact=fact*i;
  }
  cout<<fact;
  }
  
}
