#include <iostream>
#include "library.h"
using namespace std;

void display(const int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }
  cout << endl;
}

// This function sorts the first n elements using insertion sort.
void insertion_sort(int a[], int n) {
  // initializes variables for total swaps and comparisons across all iterations
  int total_swaps = 0;
  int total_comparisons = 0;

  // Runs an insertion sorting algorithm for each index of the passed array
  for (int i = 1; i < n; i++) {
    int reference = a[i];
    int j = i - 1;
    int swaps = 0;
    int comparisons = 0;


    // Defines comparison condition; compares each index to the one before it
    while (j >= 0 && a[j] < reference) {
      comparisons++;
      a[j + 1] = a[j];
      j--;
      swaps++;
    }
    comparisons++; // Increment for the final comparison that fails
    a[j + 1] = reference;

    //keeps running tally of swaps and comparisons through all iterations
    total_swaps += swaps;
    total_comparisons += comparisons;

    /* displays number of swaps and comparisons made on the
     * current iteration */
    cout << "Pass #" << i << ": ";
    display(a, n);
    cout << "Comparisons: " << comparisons << ", Swaps: " << swaps << endl;
  }
  cout << "Total comparisons: " << total_comparisons << endl;
  cout << "Total swaps: " << total_swaps << endl;
}

void shuffle(int a[], int n) {
  int random_index;
  for (int i = 0; i < n; i++) {
    random_index = rand() % n;
    swap(a[i], a[random_index]);
  }
}