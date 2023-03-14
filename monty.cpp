// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// magordon 




#include <iostream>
#include <string>

int main() {
int answer1 (0); 
double answer2 (0); 
std::string firstName (""); 
std::string favColor (""); 

  // Welcome Statement 
std::cout << "Welcome to Mychael's Monty C++ Text-based Adventure!\n";

// First Name 
std::cout << "Please enter in your first name.\n"; 
  std::cin >> firstName; 

std::cout << "Welcome Dame" << " " << firstName << std::endl; 
// First Test 
std::cout << "Please answer this question: What is 2+5? \n"; 
  std::cin >> answer1; 
    if (answer1 == 2+5)
    {
      std::cout << "Great job Dame" << " " << firstName <<  "!" << " So far you are doing well...for now. Let's move on.\n"; 
    // Second Test
      std::cout << "Now for your second test. Please enter the answer to this question: What is 3+6*4/(10+2)?\n"; 
      std::cin >> answer2; 
      if (answer2 == 3+6*4/(10+2))
      {
        std::cout << "So you think you are some mathematician huh Dame" << " "  <<             firstName << " " << "?" << " You got this one right! Ok...I guess I will have to try something else. \n"; 
        
//Third Test 
  std::cout << "Now for the third test. Please enter in your favorite color. \n"; 
    std::cin >> favColor; 
      if (favColor == "Blue" || favColor=="blue")
        {
        std::cout << "That is correct Dame" << " " << firstName << " . " << "You seem to exceed my expectations. Let's move on. \n"; 
        std::cout << "You have made it to the final question. What is the airspeed velocity of an unladen swallow?\n"; 
  std::cin >> answer1; 
    if (answer1 % 2 == 0)
    { std::cout << "I, I don’t know that! Dame" << " " << firstName << " I am being banished to the Gorge of Eternal Peril! Curse you! \n"; 
      std:: cout << "CONGRATULATIONS Dame" << " " << firstName << "!" << " You have won.\n"; 
      std::cout << "Thank you for playing Mychael's Monty C++ Text-based Adventure! Intermission...\n"; 
    }
  else 
        {
          std::cout << "HA! AND HERE I THOUGHT YOU HAD POTENTIAL. You will now be banished into the Gorge of Eternal Peril. \n"; 
        std::cout << "Thank you and have a great day.\n"; 
        std:: cout <<  "Thank you for playing Mychael's Monty C++ Text-based Adventure" << " " << firstName <<  "." << "Intermission...\n"; 
        }
}
  else {
         std::cout << " WRONG Dame" << " " << firstName << "!" << "Everyone knows that the best color is blue.\n"; 
        std:: cout<< "For your crimes, you will be banished into the Gorge of Eternal Peril.\n"; 
        std:: cout << "Thank you for playing Mychael's Monty C++ Text-based Adventure Dame" << " " << firstName << "!" << " Intermission... \n"; 
       }   
  } else {
      std::cout<< "Dame" << " " << firstName << "!" <<" Are you getting basic math wrong? Ha!\n";
        std:: cout << "To the Gorge of Eternal Peril you go!\n";
        std:: cout << "Thank you for playing Mychael's Monty C++ Text-based                     Adventure!\n";
      }
}  else {
      std::cout << "So soon Dame" << " " << firstName << "?" << " That is clearly not right and I am embarrassed for you.\n"; 
      std:: cout << "The Gorge of Eternal Peril is calling you name.\n";
    std:: cout << "Thank you for playing Mychael's Monty C++ Text-based Adventure!   Intermission...\n"; 
} // End of else statement  
      
       } // **End of main
        
  //     return 0; 
  // }




