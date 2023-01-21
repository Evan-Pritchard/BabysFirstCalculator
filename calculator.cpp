//Evan Pritchard
//CISC115 S03 MW 12:00-1:45
//Calculator Program
//In-Class 5


#include <iostream>
#include<iomanip>
using namespace std;


int main() 
{
  int input1, input2;
  double output;
  char operation;

 do
  {
      
    cout << "This is a calculator program. Please enter an integer, then the operator, then the second integer; and then press enter. \n Enter 0+0 and press enter to exit. \n";
    cin >> input1 >> operation >> input2;
    cout << endl;

    switch (operation)
      {
      case '+':
        output = input1 + input2;
        break;
      case '-':
        output = input1 - input2;
        break;
      case '*':
        output = input1 * input2;
        break;
      case '/':
        if (input2 == 0)  
          {
            cout << "Division by zero is not allowed. Please choose a second integer that is not zero" << endl << endl;
          break;
          }
        else
          {
            output = input1 / input2;
          } 
        break;
      default:
        cout << "Your operator is invalid, Please use only + (addition), - (subtraction), * (multiplication), and (division)." << endl <<endl;
        break;    
        }

    if (operation == '/' && input2 != 0)
      {
        cout << input1 << " / " << input2 << " = " << output << " Remainder " << input1 % input2 << endl << endl;
      }
   
    else if (input2 != 0)
      {
        cout << input1 << " " << operation << " " << input2 << " = " << output << endl << endl;
      }  
  }
  while (input1 != 0 || input2 != 0 || operation != '+'); 

  
  cout << "Thank you for using my calculator program. The program will now end.";
