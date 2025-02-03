#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include "library.h"
using namespace std;

int main() {
  int capacity;
  cout << "Enter the capacity of the array:\t";
  cin >> capacity;
  int test[capacity];

  unsigned seed_value = time(NULL); 
  srand(seed_value);
  for (unsigned i = 0; i < capacity; i++) {
    test[i] = rand() % 100;
  }
  cout << "Before shuffling:\n";
  display(test, capacity);

  shuffle(test, capacity);

  cout << "After first shuffle: " << endl;
  display(test, capacity);

  cout << "After second shuffle: " << endl;
  shuffle(test, capacity);
  display(test, capacity);

  //Expand the main function with calls to the shuffle and sorting functions.
  
}