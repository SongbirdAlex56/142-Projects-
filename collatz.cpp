// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// magordon





#include <iostream> 

int main() {
  //Variables 
  int lowerBound (0);
  int upperBound (0); 
  int n (0);  
  int count (0); 
  char userChoice (' '); 
  int maxCount (0); 
  int maxValue (0); 
  std::cout << "***Welcome to Mychael's CS 142 Collatz Conjucture Program!***" << std::endl;

  std::cout << std::endl;
  // Loop 1: Do-while statement 
  do 
  
{ 
  std::cout << std::endl; 
  std::cout << "Please enter a lower bound number: "; 
  std::cin>> lowerBound; // Asking for Upper Bound 

  std::cout << "Please enter an upper bound number: "; 
  std::cin>> upperBound; // Asking for Lower Bound 
  std::cout << std::endl;
  
  maxValue = 0;    
  maxCount = 0;
  for (int i = lowerBound; i <= upperBound; i++)  // Loop 3: for-loop 
  
    { 
      count = 0; 
      n = i; 
    while (n != 1)  // Loop 3: While loop 
    {
      count = count + 1; 
      if (n % 2 != 0 )   
      {
        n = 3 * n+1; 
      }
      else 
      {
          n = n/2; 
      }
     
    } //End of while loop 
    if (count > maxCount) 
    {
      maxCount = count + 1; 
       maxValue = i; 
      
    }
    else 
    {
      //Nothing here 
    }
      } // End of for-loop 
  std::cout << "The maximum cycle length between " << lowerBound << " and " << upperBound << " is: " << maxCount << std:: endl; //Finding max cycle between 

  std::cout << "The value between " << lowerBound << " and " << upperBound << " with the maximum cycle is: " << maxValue << std::endl; //Finding value between 

  std::cout << std::endl;
  
  do
    {
      std::cout << "Would you like to enter another number ( 'Y' or 'N'): "; 
      std::cin >> userChoice; //Asking for another input 
    }
  while (userChoice != ('Y')  && userChoice != ('N'));  //Loop 4: do-While loop
  
  } while (userChoice == 'Y'); // End of do-while loop from line 27
std::cout << std::endl; 
std::cout << "Thank you for running my program! Have a good day." << std::endl; 
  

  
return 0; 

   } // Main end        

  
  
  
  
