/*  
Variation of rock paper scissors
*/

#include <iostream>
#include <stdlib.h>

/*
rock == 1
paper == 2
scissors == 3
🦎 == 4
🖖 == 5

================
1 beats 3 and 4
2 beats 1 and 5
3 beats 2 and 4
4 beats 2 and 5
5 beats 1 and 3
================


*/


int main() {
  srand(time(NULL));
  int computer = std::rand() % 5 + 1;
  std::string user_choice;
  std::string computer_choice;
  int user = 0;

  std::cout << "=================================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!\n";
  std::cout << "        It's very simple\n\n";
  std::cout << "        Scissors cuts paper.\n";
  std::cout << "         Paper covers rock.\n";
  std::cout << "        Rock crushes lizard.\n";
  std::cout << "        Lizard poisons Spock.\n";
  std::cout << "       Spock smashes scissors.\n";
  std::cout << "     Scissors decapitates lizard.\n";
  std::cout << "          Lizard eats paper.\n";
  std::cout << "        Paper disproves Spock.\n";
  std::cout << "         Spock vaporizes rock.\n";
  std::cout << "        Rock crushes scissors.\n";
  std::cout << "=================================\n";
  
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";

  std::cout << "shoot! ";

  std::cin >> user;


if (user == 1) {
  user_choice = "✊";
}
else if (user == 2) {
  user_choice = "✋";
}
else if (user == 3) {
  user_choice = "✌️";
}
else if (user == 4) {
  user_choice = "🦎";
}
else if (user == 5) {
  user_choice = "🖖";
}
else if (user == 3) {
  user_choice = "✌️";
}

if (computer == 1) {
  computer_choice = "✊";
}
else if (computer == 2) {
  computer_choice = "✋";
}
else if ( computer == 3) {
  computer_choice = "✌️";
}
else if (computer == 4) {
  computer_choice = "🦎";
}
else if (computer == 5) {
  computer_choice = "🖖";
}


std::cout << "You choose " << user_choice << " and computer chooses " << computer_choice << "\n";
if (user == 1 && computer == 1) {
  std::cout << "It is a tie!\n";
}
else if (user == 1 && (computer == 2 || computer == 5)) {
  std::cout << computer_choice << " beats " << user_choice << ", you lose.\n";
}
else if (user == 1 && (computer == 3 || computer == 4)) {
  std::cout << user_choice << " beats " << computer_choice << ", you win.\n";
}
else if (user == 2 && computer == 2) {
  std::cout << "It's a tie!\n";
}
else if (user == 2 && (computer == 3 || computer == 4)){
  std::cout << computer_choice << " beats " << user_choice << ", you lose.\n";
}
else if (user == 2 && (computer == 1 || computer == 5)) {
  std::cout << user_choice << " beats " << computer_choice << ", you win.\n";
}
else if (user == 3 && computer == 3) {
  std::cout << "It's a tie.\n";
}
else if (user == 3 && (computer == 1 || computer == 5)) {
  std::cout << computer_choice << " beats " << user_choice << ", you lose.\n";
}
else if (user == 3 && (computer == 2 || computer == 4)) {
  std::cout << user_choice << " beats " << computer_choice << ", you win.\n";
}
else if (user == 4 and computer == 4) {
  std::cout << "It's a tie.\n";
}
else if (user == 4 && (computer == 3 || computer == 1)) {
  std::cout << computer_choice << " beats " << user_choice << ", you lose.\n";
}
else if (user == 4 && (computer == 2 || computer == 5)) {
  std::cout << user_choice << " beats " << computer_choice << ", you win.\n";
}
else if (user == 5 && computer == 5) {
  std::cout << "It's a tie.\n";
}
else if (user == 5 && (computer == 2 || computer == 4)) {
  std::cout << computer_choice << " beats " << user_choice << ", you lose.\n";
}
else if (user == 5 && (computer == 1 || computer == 3)) {
  std::cout << user_choice << " beats " << computer_choice << ", you win.\n";
}
return 0;
}
