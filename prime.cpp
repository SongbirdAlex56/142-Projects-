// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// magordon


#include <iostream>

bool isPrime(int num); 
void printPrimeNumbers(int num); 
int howManyPrime(int & num, int count); // by refernce function 

//Main 
int main() {
  char useranswer (' '); 
  char userchoice (' '); 
  int number(0), total(0); 

  std::cout << "Welcome to Mychael's Prime Calculator!" << std::endl << std::endl; 

  do
    {
      total = 0;  //Setting total to zero here
      
      std::cout << "Please enter a number: "; 
      std::cin >> number; 

      total = howManyPrime(number,total); //Calling howManyPrime function 
      

     if(isPrime(number)) //Calling isPrime function 
      {
          std::cout << std::endl << number << " is a prime number." << std::endl; 
      }
      else
      {
		  //Nothing!
      }
      if (total > 0)
      {
        	std::cout << std::endl; 
        	std::cout << "\tThere are " << total << " prime numbers between 0 and " << number << std::endl; 
        
       
        
        	std::cout << std::endl << "Would you like to see the numbers - (Y)es or (N)o? "; 
        
        	std::cin >> userchoice; 
        

       	 if (userchoice == 'Y') //choice here and not answer 
         {
         	printPrimeNumbers(number);   //Calling print prime numbers function 
          	std::cout << std::endl << std:: endl; 
       	 }
        else
        {
          
        }
     }
     else
      {
        if(number == 2) // for 2 
        {
          	std::cout << std::endl << number << " is the smallest prime number!" << std::endl << std::endl; 
        }
        else
        {
          	std::cout << std::endl << "No prime numbers were found!" << std::endl << std::endl; 
        }
     }
      
	    
     	std::cout << "Would you like to continue - (Y)es or (N)o? "; 
      	
		std::cin >> useranswer; //answer here not choice 
	  
      	std::cout << std::endl; 
   
    } while (useranswer == 'Y'); 

   	 std::cout << "Thank you for running my program - goodbye!" << std::endl; 
    
  
  
  	return 0; 

} //end of main 

//Function Definitions 

bool isPrime(int num)   //is prime function (true/false)
{
  bool isPrime(false); 

  int count(0); 

  if(num == 0 || num == 1)  //num is 0 OR 1 
  {
    return false; 
  }
  else 
  {
      int x(2); 

      while (x <= num)
      {
        if (num % x == 0)
        {
          count++; 
        }
        else 
        {
          
        }
        x++; 
      }
  }

  if(count > 1)   //Accounting for negative numbers 
  {
    isPrime = false; 
  }
  else
  {
    isPrime = true;
  }

    return isPrime; 
}

void printPrimeNumbers(int num)  //Printing prime numbers function 
{
  std::cout << std::endl; 
  std::cout << "\tThe number(s) are: "; 

  for(int i(2); i <= num-1; i++)
    {
      bool primeNum = isPrime(i); 

      if(primeNum)
      {
        std::cout << i << " "; 
      }
      else 
      {
        
      }
    }
}

int howManyPrime(int & num, int count) //how many are prime function and by-refernce 
{
  for(int i(2); i <= num-1; i++)
    {
     
      bool primeNum = isPrime(i); 
      
      if(primeNum)
      {
        count++; 
      }
      else
      {
        
      }
    }
  return count;    // have to return count 
}