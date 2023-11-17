#include <iostream>
#include <string>
#include "userInterface.h"

// Main menu
int main() {
  showMainMenu();
  int input;
  std:: cout << "Your input: ";
  std::cin >> input;
  system("cls"); // Clear the screen to keep the UI clean / readable
  std::cout << "Your input: " + std::to_string(input) << std::endl;
  return 0;
}