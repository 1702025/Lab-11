# include <iostream>
using namespace std;
int deposit(int year, int sav,int inter,int initial_amount);
int main()
{
 int year,sav,inter,y,amount,initial_amount;
 y=deposit (year,sav,inter,initial_amount);
 cout<<"total deposit = "<< y;

}
int deposit(int year, int sav,int inter,int initial_amount)
{
  int saving,totl_saving,amount,totl_amount;
  int tot1,tot=0;
  cout<<"enter initial amount = ";
  cin>>initial_amount;
  cout<<"enter number of year = ";
  cin>>year;
  cout<<"enter interest rate = ";
  cin>>inter;
  totl_saving=(initial_amount/100)*inter;
  cout<<endl;
  cout<<"total saving = "<<totl_saving<<endl;
  totl_amount=initial_amount+inter;
  cout<<"total amount = "<<totl_amount<<endl;
  for(int x=1;x<=year;x++)
  {
    cout<<"enter amount for year "<<x<<" = ";
    cin>>sav;
    amount=totl_amount+sav;
    saving=(amount/100)*inter;
    totl_saving+=saving;
    totl_amount=amount+saving;
    cout<<endl<<"saving = "<<saving;
    cout<<endl<<"total saving = "<<totl_saving;
    cout<<endl<<"total_amout = "<<totl_amount<<endl<<endl;
  }
return totl_amount;
}
