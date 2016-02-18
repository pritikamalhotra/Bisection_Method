#include<iostream>
#include<cmath>
using namespace std;
double f (double x)
{
  double fx1;
  fx1 = pow(x,3)-(x)-4;
  return (fx1);
}
 
int main()
{
  double x1,x2,x3;
  cout <<"Enter x1 = ";
  cin >> x1;
  cout <<"Enter x2 = ";
  cin >> x2;
  do
 {
  x3 = (x1 + x2)/2;
  if( f(x1) * f(x3) < 0 )
  {
  x2 = x3;
  }
  else
  {
  x1 = x3;
  }
  }
 while ( abs(x1 - x2) < 0.0000001 || f(x3) == 0 );
 cout<<x3<<endl<<f(x3);
 return 0;	
}
