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

  cout << endl;
  cout << "Part 2" << endl;

  int first_set[5];
  int second_set[5];
  for (int i = 0; i < 5; i++) {
    first_set[i] = rand() % 100;
    second_set[i] = rand() % 100;
  }

  cout << "First set: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << first_set[i] << " ";
  }

  cout << endl;

  cout << "Second set: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << second_set[i] << " ";
  }

  cout << endl;

  insertion_sort(first_set, 5);
  insertion_sort(second_set, 5);

  cout << endl;

  cout << "Part 3" << endl;

  bool cont = true;

  while (cont == true) {
    cout << "Enter capacity size: ";
    cin >> capacity;
    int new_array[capacity];

    cout << "Array size is " << capacity << endl;

    srand(seed_value);
    for (unsigned i = 0; i < capacity; i++) {
      new_array[i] = rand() % 100;
    }

    selection_sort(new_array, capacity);
    cout << "Continue? y or n ";
    char response;
    cin >> response;
    if (response == 'n') {
      cont = false;
    }
  }



  //Expand the main function with calls to the shuffle and sorting functions.

}