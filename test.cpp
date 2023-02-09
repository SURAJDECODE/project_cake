#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
/*enum days
{
  mon,
  tue,
  wed,
  thurs,
  fri,
  sat,
  sun
};
enum dept
{
  cs = 1,
  ece,
  it,
  civ
};
typedef int marks;
*/
int main()
{
  /*
   int b, h;
     float area;
     cout << "enter the values";
     cin >> b >> h;
     area = (b * h) / 2;
     cout << "the area is:" << area;

  int n, sum;
  cout << "enter the value";
  cin >> n;
  sum = (n * (n + 1)) / 2;
  cout << "the sum is:" << sum;

  int a, b, c;
  float root1, root2;
  cout << "enter the numbers";
  cin >> a >> b >> c;
  root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  cout << "the roots are" << root1 << " " << root2;

  int r;
  float area;
  cout << "enter the radius";
  cin >> r;
  area = (float)22 / 7 * r * r;
  cout << "area of circle is :" << area;

  int u, v, a;
  float speed;
  cout << "enter the values";
  cin >> u >> v >> a;
  speed = (v * v - u * u) / (2 * a);
  cout << "the speed is:" << speed << endl;

  sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

 #compound statement
  int a = 10, b = 5, c = 15;
  int sum = 5;
  int prod = 1;

  sum += a + b + c;
  prod *= a * b * c;
  cout << "The sum is ---->" << sum << endl;
  cout << "The product is ---->" << prod << endl;

 #increment and decrement operators

int i=5,j;
  j=i++;
  cout<<j<<" "<<i<<endl;

  int k=5,l;
  l=++k;
  cout<<l<<" "<<k<<endl;

  int a=5,b;
  b=2*++a + 2*a++;
  cout<<b<<" "<<a<<endl;;

  int c=5,d;
  d=2*c++ + 2*c++;
  cout<<d<<" "<<c<<endl;

  int i = 5, j;
  j = i++;

  int k = 5, l;
  l = ++k;

  int a = 5, b;
  b = 2 * ++a + 2 * a++;

  int c = 5, d;
  d = 2 * c++ + 2 * c++;

  cout << j << " " << i << endl;
  cout << l << " " << k << endl;
  cout << b << " " << a << endl;
  cout << d << " " << c << endl;

  #Program to Demonstrate Overflow
  char a = 128;
  cout << (int)a << endl;
  char b = 127;
  b++;
  cout << (int)b << endl;
  char c = -129;
  cout << (int)c << endl;
  char d = -128;
  d--;
  cout << (int)d << endl;
  int e = INT_MAX;
  e++;
  cout << (int)e << endl;
  # enum and type def user defined functions
  days d;
  d = mon;
  marks m1, m2;
  m1 = 34;
  dept fsd = cs;

  cout << mon << endl;
  cout << tue << endl;
  cout << wed << endl;
  cout << thurs << endl;
  cout << fri << endl;
  cout << sat << endl;
  cout << sun << endl;
  cout << fsd << endl;
  cout << m1 << endl;

  int a, b, c, i;
  cout << "enter the nos" << endl;
  cin >> a >> b >> i;

  if (a > b || ++i < b)
  {
    cout << i;
  }
  else
  {
    c = a / b;
    cout << c;
  }
  //Dynamic Declaration

int a=10,b=5;
if(true)
{
int c=a+b;
cout<<c<<endl;
}
{
int d=a-b;
if(true)
{
cout<<d<<endl;
}
}
if(int e=a*b)
{
cout<<e<<endl;
}
//switchcase example1
  int day;
  cout << "enter the day" << endl;
  cin >> day;

  switch (day)
  {
  default:
    cout << "Invalid day";
    break;
  case 1:
    cout << "monday";
    break;
  case 2:
    cout << "tuesday";
    break;
  case 3:
    cout << "wednesday";
    break;
  case 4:
    cout << "thursday";
    break;
  case 5:
    cout << "friday";
    break;
  case 6:
    cout << "saturday";
    break;
  case 7:
    cout << "sunday";
    break;
  }
  //example 2
  cout << "Menu\n";
  cout << "1.ADD\n"
       << "2.SUB\n"
       << "3.MUL\n"
       << "4.DIV\n";

  int a, b, c, choice;
  cout << "enter the choice";
  cin >> choice;
  cout << "enter the 2nos" << endl;
  cin >> a >> b;

  switch (choice)
  {
  default:
    cout << "invalid case";
    break;
  case 1:
    c = a + b;
    break;
  case 2:
    c = a - b;
    break;
  case 3:
    c = a * b;
    break;
  case 4:
    c = a / b;
    break;
  }
  cout << "result is-->" << c;

  //Program to Calculate Discounted Bill Amount
#include<iostream>
using namespace std;
int main()
{
float billAmount;
float discount=0.0;
cout<<"Enter Bill Amount:";
cin>>billAmount;
if(billAmount>=500)
discount=billAmount*20/100;
else if(billAmount>=100 && billAmount<500)
discount=billAmount*10/100;
cout<<"Bill Amount is:"<<billAmount<<endl;
cout<<"Discount is :"<<discount<<endl;
cout<<"Discounted Amount is:"<<billAmount-
discount<<endl;
}
// display the digits of number
    int n, r;
    cout << "enter the number";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << endl;
    }
  */
  return 0;
}
