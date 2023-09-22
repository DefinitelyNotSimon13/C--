#include <iostream>

int main() {
//!Beginning
  std::cout << "Hello World!\n";
  std::cout << "Codeacademy\n";
  std::cout << "\n";
  std::cout << "       1\n";
  std::cout << "     2 3\n";
  std::cout << "   4 5 6\n";
  std::cout << "7 8 9 10\n";
  /*Crazy
  multiple lines, damn*/

//!Variables and Input
  std::cout << "\n\n";
  std::cout << "Variables and Input\n";

  int score = 5;
  double price = 8.532;
  char letter = 'S';
  int grade = 3;
  std::string a_string = "This is a string";
  bool is_cool = false;



  int tip = 0;
  std::cout << "Enter amount to tip: ";
  std::cin >> tip;
  std::cout << "You have tipped " << tip << "€\n"; 

  if (tip  == (price / 10)) {
    std::cout << "Your tip is not 10% of the price\n";
  } 
  else if  (tip  >= (price / 10)){
    std::cout << "Your tip is more then 10% of the price\n";
  }
  else if  (tip  <= (price / 10)){
    std::cout << "Your tip is less then 10% of the price\n";
  }
  else {
    std::cout << "Something went wrong!\n";
  }
  std::cout << "\n";
  std::cout << "Enter your grade: ";
  std::cin >> grade;

  switch (grade) {
    case 1:
        std::cout << "Sehr gut!";
        break;
    case 2:
        std::cout << "Gut!";
        break;
    case 3:
        std::cout << "Befriedigend";
        break;
    case 4:
        std::cout << "Ausreichend";
        break;
    case 5:
        std::cout << "Mangelhaft";
        break;
    case 6:
        std::cout << "Ungenügend";
        break;
    default:
        std::cout << "Keine Note";
        break;
  }


  return 0;
}