#include <iostream>
using namespace std;
int main()
{
  int num,x;
  cout<<" enter your number ";
  cin>>num;
  int counter=0;
  for(x=1;x<=num;x++)
  {
    if(num%x==0)
    {
      counter ++;
    }
  }
  if(counter==2)
    {
    cout<<"prime number ";
    }
 else
  {
    cout<<" not prime ";
  }
return 0;
}
