#include <iostream>
using namespace std;
int main()
{
  char cal;
  float a, b, sum, sub, mul, div;
  cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Simple Calculator!!!!!!!!!!!!!!!!!!!!!" << endl;
  cout << "Enter two Number for operation:" << endl;
  cout << "Enter The First Number:" << endl;
  cin >> a;
  cout << "Enter The Second Number:" << endl;
  cin >> b;
  cout << "Perform Following opereations:" << endl;
  cout << "Enter operator: 1.+\t 2.-\t 3.*\t 4./: " << endl;
  cin >> cal;
  switch (cal)
  {
  case '+':
  {
    sum = a + b;
    cout << "Addition of the Given Numbers:" << sum;
    break;
  }
  case '-':
  {
    sub = a - b;
    cout << "Substraction of the Given Numbers:" << sub;
    break;
  }
  case '*':
  {
    mul = a * b;
    cout << "Multiplication of the Given Numbers:" << mul;
    break;
  }
  case '/':
  {
    div = a / b;
    cout << "Division of the Given Numbers:" << div;
    break;
  }
  default:
    cout << "Error!You Picked Another Option!!" << endl;
    cout << "!! TRY AGAIN !!" << endl;
    break;
  }
  return 0;
}
