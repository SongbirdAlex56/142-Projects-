// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// magordon 

#include <iostream>

int main() {
// 3 Variables 
int length1 (0);
int length2(0); 
double answer(0); 

std::cout << "Welcome to Mychael's CS 142 Shape Wizard Assingment!" << std::endl; 

//SHAPE 1: RECTANGLE


std::cout << "*** RECTANGLE AREA *** \n"; 
 
std::cout << "Please enter the length for one side of the rectangle \n"; 
  std::cin >> length1; 

  std::cout << "Please enter the width for one side of the rectnagle \n"; 
  std::cin >> length2; 

  answer = length1 * length2; //Equation for rectangle

std::cout << "The value of the area of the rectangle is: " << answer << std:: endl; 

//SHAPE 2: SQUARE
std::cout <<"*** SQUARE AREA *** \n"; 

  std::cout << "Please enter the length for one side of a square.\n"; //Output prompting user to type in length for shape 1 

std::cin >> length1;  //Asking for user input 
  answer = length1 * length1; //Equation 

std::cout << "The value of the area of the square is: "<< answer << std::endl; //Will print out area 

//SHAPE 3: ROMBUS 
std::cout << " *** RHOMBUS AREA *** \n"; 

std::cout << "Please enter the length for one diagonal of the rhombus \n";
  std::cin >> length1; 

std::cout << "Please enter the length for the other diagonal of the rhombus \n"; 
  std::cin >> length2; 

  answer = (length1 * length2) / 2; //Equation for Rhombus 

std::cout << "The value of the area of the rhombus is: " << answer << std::endl; 

//SHAPE 4: TRIANGLE 
std::cout << "*** TRIANGLE AREA *** \n"; 

std::cout << "Please enter the base for the triangle \n";
  std::cin >> length1; 

std::cout << "Please enter the height of the triangle \n";
  std::cin >> length2; 

  answer = (length1 * length2) / 2; //Equation for Triangle 

std::cout << "The value of the area of the triangle is: " << answer << std::endl; 
std::cout << "Thanks for playing! Goodbye!"<< std::endl; 

return 0; 
}