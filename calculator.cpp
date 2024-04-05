#include<iostream>
using namespace std;
class calculator
{
float s;
 public:
  
  void addition(int a,int b)
  {
     s=float(a)+float(b);
     cout<<a<<" + "<<b<<" = "<<s<<endl;
  }
  void subtraction(int a,int b)
  {
    s=float(a)-float(b);
    cout<<a<<" - "<<b<<" = "<<s<<endl;
  }
  void multiplication(int a,int b)
  {
    s=float(a)*float(b);
    cout<<a<<" * "<<b<<" = "<<s<<endl;
  }
  void division(int a,int b)
  {
    s=float(a)/float(b);
    cout<<a<<"/"<<b<<" = "<<s<<endl;
  }
};

int main()
{
    calculator c;
    float a,b;
    char op,cont;
   do
   {
    cout<<endl<<"Enter : ";
    cin>>a>>op>>b;
    
    switch(op)
    {
      case '+':
        c.addition(a,b);
        break;
      case '-':
        c.subtraction(a,b);
        break;
      case '*':
        c.multiplication(a,b);
        break;
      case '/':
        c.division(a,b);
        break;
      default :
        cout<<endl<<"Please... Enter the correct operator."<<endl; 
    }
    cout<<"Do you want to continue...? (Y/N) "<<endl;
    cin>>cont;
   } while (cont=='y'||cont=='Y');
}