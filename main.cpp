// ------------- FILE HEADER -------------
// Author:
// Assignment:
// Date:
// Description:
// Sources:

// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: NONE MIDTERM WEEK

// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]:
// B. OUTPUT [yes/no]:
// C. CALCULATIONS [yes/no]:
// D. LOGIC and ALGORITHMS [yes/no]:
//    (Optional) flow chart link or file name:

// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]:
// (Optional) Additional tests count:

// ------------- CODE -------------
#include <iostream>  // https://en.cppreference.com/w/cpp/header/iostream
#include <string>    // https://en.cppreference.com/w/cpp/header/string
#include <limits>    // https://en.cppreference.com/w/cpp/header/limits (NOT <climits> for cin.ignore(numeric_limits<streamsize>::max(), '\n');)
#include <iomanip>   // https://en.cppreference.com/w/cpp/header/iomanip

// RUN AND TEST COMMAND
// cd _midterm // Or the directory containing these files
// g++ main.cpp && for t in *.txt; do ./a.out < $t; done; rm ./a.out

// MINIMAL COMPILE AND RUN, one line each
// COMPILE
// g++ main.cpp

// RUN
// ./a.out

// REMOVE ./a.out
// rm ./a.out

// COMPILE and Run Tests
// g++ main.cpp && for t in test*txt; do echo -e "\nTEST: $t"; ./a.out < $t; done; rm ./a.out
using namespace std;

int main()
{
  string player_A_name = "";
  string player_B_name = "";
  string player_C_name = "";

  int player_A_count = 0;
  int player_B_count = 0;
  int player_C_count = 0;

  cout << "Welcome to the Rock Collector Championships!" << endl;

  cout << "Enter player 1 name: ";
  getline(cin, player_A_name);
  cout << "How many rocks did " << player_A_name << " collect? ";
  cin >> player_A_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter player 2 name: ";
  getline(cin, player_B_name);
  cout << "How many rocks did " << player_B_name << " collect? ";
  cin >> player_B_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter player 3 name: ";
  getline(cin, player_C_name);
  cout << "How many rocks did " << player_C_name << " collect? ";
  cin >> player_C_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // DEBUG
  // cout << endl;
  // cout << "NAME" <<  '\t' << "COUNT" << endl;
  // cout << player_A_name << '\t' << player_A_count << endl;
  // cout << player_B_name << '\t' << p2_count << endl;
  // cout << player_C_name << '\t' << p3_count << endl;

  // Calculations

  float average = (player_A_count + player_B_count + player_C_count) / 3.0;

  cout << fixed << setprecision(2);

  int a = player_A_count;
  int b = player_B_count;
  int c = player_C_count;

  string results = "";

  // Determine places
  cout << endl;

  // Three way for first
  // a and b and c
  if (player_A_count == player_B_count and player_B_count == player_C_count)
  {
    results = player_A_name + " and " + player_B_name + " and " + player_C_name + " are in a threee way tie for first.";
  }

  // Two way ties for first
  // a and b
  else if (player_A_count == player_B_count and player_B_count > player_C_count)
  {
    results = player_A_name + " and " + player_B_name + " are tied for first, " + player_C_name + " is second.";
  }

  // a and c
  else if (player_A_count == player_C_count and player_C_count > player_B_count)
  {
    results = player_A_name + " and " + player_C_name + " are tied for first, " + player_B_name + " is second.";
  }

  // b and c
  else if (player_B_count == player_C_count and player_C_count > player_A_count)
  {
    results = player_B_name + " and " + player_C_name + " are tied for first, " + player_A_name + " is second.";
  }

  // Two way ties for second
  // a and b
  else if (player_A_count == player_B_count and player_B_count < player_C_count)
  {
    results = player_C_name + " is first, " + player_A_name + " and " + player_B_name + " are tied for second.";
  }

  // a and c
  else if (player_A_count == player_C_count and player_C_count < player_B_count)
  {
    results = player_B_name + " is first, " + player_A_name + " and " + player_C_name + " are tied for second.";
  }

  // b and c
  else if (player_B_count == player_C_count and player_C_count < player_A_count)
  {
    results = player_A_name + " is first, " + player_B_name + " and " + player_C_name + " are tied for second.";
  }

  // unique count results
  // FIRST SECOND THIRD
  // a     b      c
  else if (player_A_count > player_B_count and player_B_count > player_C_count)
  {
    results = player_A_name + " is first, " + player_B_name + " is second, " + player_C_name + " is third.";
  }  

  // a     c      b
  else if (player_A_count > player_C_count and player_C_count > player_B_count)
  {
    results = player_A_name + " is first, " + player_C_name + " is second, " + player_B_name + " is third.";
  } 

  // b     a      c
  else if (player_B_count > player_A_count and player_A_count > player_C_count)
  {
    results = player_B_name + " is first, " + player_A_name + " is second, " + player_C_name + " is third.";
  } 

  // b     c      a
  else if (player_B_count > player_C_count and player_C_count > player_A_count)
  {
    results = player_B_name + " is first, " + player_C_name + " is second, " + player_A_name + " is third.";
  }

  // c     a      b
  else if(player_C_count > player_A_count and player_A_count > player_B_count)
  {
    results = player_C_name + " is first, " + player_A_name + " is second, " + player_B_name + " is third.";
  }

  // c     b      a
  else if(player_C_count > player_B_count and player_B_count > player_A_count)
  {
    results = player_C_name + " is first, " + player_B_name + " is second, " + player_A_name + " is third.";
  }

  cout << results << endl;

  cout << "The average number of rocks collected by the top three players is " << average << " rocks!" << endl;

  cout << "Congratulations Rock Collectors!" << endl;

  return 0;
}

// ------------- DESIGN -------------
/*
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type.

B. OUTPUT
Define the output variables including data types.

C. CALCULATIONS
Describe calculations used by algorithms in step D.
List all formulas.
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts.
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs.
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Welcome to the Rock Collector Championships!

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.

Enter player 2 name: Link
How many rocks did Link collect? 45

Enter player 3 name: D. Va
How many rocks did D. Va collect? 45

Link and D. Va are tied for first place.
Gordan Freeman is in second place!

The average number of rocks collected by the top three players is 30.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: Mario
How many rocks did Mario collect? 56

Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56

Enter player 3 name: Sonic
How many rocks did Sonic collect? 56

It is a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57

Enter player 2 name: Samus
How many rocks did Samus collect? 102

Enter player 3 name: Kirby
How many rocks did Kirby collect? 62

Samus is in first place!
Kirby is in second place.
King Dedede is in third place.

The average number of rocks collected by the top three players is 73.67 rocks!

Congratulations Rock Collectors!

*/
