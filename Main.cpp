/**
 * @file Main.cpp
 * @author n0ct3ri4 (contact@wlvs.fr)
 * @brief IHE : Like an IDE but for Hacking.
 * @version 0.1
 * @date 2021-03-26
 * @copyright Copyright (c) 2021
 * 
 * There's a problem : When we press "enter" and have space(s) in the prompt, the program 
 * will execute all terms separately. I don't really know how to fix this issue, and I need
 * this before adding any hacking commands.
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * ============================
 * ========== COLORS ==========
 * ============================
 * 
 *          foreground background
 * black        30         40
 * red          31         41
 * green        32         42
 * yellow       33         43
 * blue         34         44
 * magenta      35         45
 * cyan         36         46
 * white        37         47
 * 
 * ============================
 * 
 * reset             0  (everything back to normal)
 * bold/bright       1  (often a brighter shade of the same colour)
 * underline         4
 * inverse           7  (swap foreground and background colours)
 * bold/bright off  21
 * underline off    24
 * inverse off      27
 * 
 * ============================
 * 
 * E.g. :  cout << "\033[1;31mbold red text\033[0m\n";
 * 
 * ============================
 * 
 * Here, \033 is the ESC character, ASCII 27. It is followed by [, 
 * then zero or more numbers separated by ;, and finally the letter m. 
 * The numbers describe the colour and format to switch to from that 
 * point onwards.
 * 
 * ============================
 * 
 * Source : https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
 */

void br() {
  cout << endl;
}

void log(string message) {
  cout << message << endl;
}

int main() {
  // Main menu...

  log("\033[1;34m   ██╗   ██╗  ██╗   ███████╗      \033[0m");
  log("\033[1;34m   ██║   ██║  ██║   ██╔════╝      \033[0m");
  log("\033[1;34m   ██║   ███████║   █████╗        \033[0m");
  log("\033[1;34m   ██║   ██╔══██║   ██╔══╝        \033[0m");
  log("\033[1;34m   ██║██╗██║  ██║██╗███████╗██╗   \033[0m");
  log("\033[1;34m   ╚═╝╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚═╝   \033[0m");
  log("\033[0;34m  Like an IDE but for Hacking...  \033[0m");
  
  br();
  log("Type /help to see the docs...");
  br();

  cmd:
    string _;
    cout << "\033[0;33mroot\033[0;37m@\033[0;33mworker000\033[0;34m$\033[0m ";
    cin >> _;
    br();
    system(("node ./JS/shell.js " + _).c_str());
    goto cmd;

  #pragma endregion
}
