#include <iostream>
#include <string>
#include <cstring>

void reversedWord(char input[], int size);

int main()
{
  char word[100]; 
  char answer; 
	std::cout << "Welcome to Mychael's Word Reversal Program!" << std::endl; 
	
    do 
    {
    std::cout << std::endl; 
		std::cout << "Please enter a word (100 Characters or Less): "; 
    std::cin >> word; 
	   //Calling reverse word function  
		reversedWord(word, strlen(word));
    std::cout << std::endl; 
    std::cout << "Your word spelled backwards is: " << word << std::endl; 
		//Asking if they would like to continue
    std::cout << std::endl; 
    std::cout << "Would you like to continue (Y|N)?: "; 
    std::cin >> answer; 
     while(answer != 'N' && answer != 'Y')
        { //Invalid input statement 
         std::cout << std::endl; 
         std::cout << "Invalid Input - Please enter 'Y' or 'N': "; 
         std::cin >> answer; 
       }
      
		} while (answer != 'N');  // End of do while s
	  std::cout << std::endl; 
    std::cout << "Thank you! Goodbye! " << std::endl; 
}

void reversedWord(char input[], int size)
{
	char temp; 
  if(size-- < 2)
  {
    return; //Returning nothing 
  }
  else //Recursion 
  {
    temp = input[0]; 
    input[0] = input[size];  
    input[size] = temp; 
    reversedWord(input + 1, size - 1); 
  }
}

