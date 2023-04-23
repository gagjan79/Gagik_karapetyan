#include <iostream>

 double getDouble (){
  std::cout << "Enter a double value " << std::endl;
  double x;
  std::cin >> x ;

  return x;
 }
 char getOperator(){
  std::cout<< " Enter one of the following: +, -, *, or /: " << std::endl;
  char op;
  std::cin >> op;

  return op;
 }

 void printResult(double x, char op , double y){
  if (op == '+')
    std::cout << x <<" + "<< y << " = " << x + y <<std::endl;
  else if(op == '-')
    std::cout << x <<" - "<< y << " = " << x - y <<std::endl;
  else if(op == '*')
    std::cout << x <<" * "<< y << " = " << x * y <<std::endl;
  else if(op == '/')
    std::cout << x <<" / "<< y << " = " << x / y <<std::endl;
 }
 int main()
 { 
   double x = getDouble();
   double y = getDouble();

   char op = getOperator();

   printResult(x, op , y);
   
   return 0;
 }