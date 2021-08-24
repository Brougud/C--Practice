
#include <iostream>

int main() {

  int answer = rand() % 10;
  
  int guess;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:

  while (guess != awnser) {

    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;

  }
  
  std::cout << "You got it!\n";

  return 0;
  
}
