//Brad Lefler
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string food;
do{
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
     if(numItems<5)
      {
       list[numItems]=food;
       numItems++;
      }
      else
      {  
        cout<<"You'll need a bigger list!"<<endl;
      }
  }
  }
  while( input!='Q'&&input!='q' );
  if(input=='Q'||input=='q')
  {
    cout<<"==ITEMS TO BUY=="<<endl;
    cout<<"1 "<<list[0]<<endl;
    cout<<"2 "<<list[1]<<endl;
    cout<<"3 "<<list[2]<<endl;
    cout<<"4 "<<list[3]<<endl;
    cout<<"5 "<<list[4]<<endl;
  }
  return 0;
}
