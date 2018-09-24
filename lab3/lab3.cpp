#include <iostream>
using namespace std;
int main()
{
  int num,var;
  cout<<" enter your number ";
  cin>>num;
  int counter=0;
  for(var=1;var<=num;var++)
  {
    if(num%var==0)
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
