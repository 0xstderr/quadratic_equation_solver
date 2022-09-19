/*

### Quadratic Equation Solver ###

C++ exercise I did, it solves a quadratic equation based on three values provided by the user.

Licence : GPL 3.0

*/


// Libraries

#include <iostream>
#include <cmath>


// Main function

int main() {
  
  
// declaring and initializing the variables used for stocking the values given by the user.

  double a, b, c;

// prompting the user for a value and then assigning it to its corresponding variable.

  std::cout << "Enter a:";
  std::cin >> a;
  std::cout << "Enter b:";
  std::cin >> b;
  std::cout << "Enter c:";
  std::cin >> c;

// declaring two variables which will be used to store the results of the equation.

  double root1, root2;


// Doing the equation and using the std::sqrt() function in the cmath library to get the square root values.

  root1 = (-b + std::sqrt((b*b) - 4*(a*c))) / (2*a);

  root2 = (-b - std::sqrt((b*b) - 4*(a*c))) / (2*a);


  // Outputting the results.

  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is "<< root2 << "\n";
  
  return 0;
  
}

// End of the program.
