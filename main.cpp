//Brad Lefler
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
vector <string> list; 
//int numItems = 0;
char input;
string food;

do
{
cout<<"\n==GROCERY LIST MANAGER==";
cout<<"\nEnter your choice: ";
cout<<"\n (A)dd an item";
cout<<"\n (Q)uit";
cout<<"\nYour choice (A/Q): ";
cin>>input;

  if(input=='A'||input=='a')
  {
    cout<<"What is the item?"<<endl;
    cin>>food;
    list.push_back(food);
  }

}
while(input!='Q'&&input!='q');

if(list.size()>0)
{
  cout<<"==ITEMS TO BUY=="<<endl;
  for(int i=0; i < list.size(); i++)
  {
  cout<<i+1<<" "<<list[i]<<endl;
  }
}
else
  {
  cout<<"No items to buy!"<<endl;
  }



return 0;
}
