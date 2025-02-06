#include <iostream>
#include "library.h"
using namespace std;

void display(const int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }
  cout << endl;
}

// This function sorts the first n elements using insertion sort with at most one swap per pass.
void insertion_sort(int a[], int n) {
  int total_swaps = 0;
  int total_comparisons = 0;

  for (int i = 1; i < n; i++) {
    int reference = a[i];
    int j = i - 1;
    int swaps = 0;
    int comparisons = 0;
    cout << "Pass: " << i << endl;

    // Find the correct position for the reference element
    while (j >= 0 && a[j] > reference) { // Corrected comparison condition
      cout << "Performing comparison" << endl;
      comparisons++;
      j--;
      // Perform a single swap if necessary

    }
    if (j + 1 != i) {
      cout << "Performing swap" << endl;
      swap(a[j + 1], a[i]);
      swaps++;
    }

    comparisons++; // Increment for the final comparison that fails



    total_swaps += swaps;
    total_comparisons += comparisons;

    cout << "Swaps: " << total_swaps << endl;
    cout << "Comparisons: " << total_comparisons << endl;
    display(a, n);
  }

  cout << "Final array: " << endl;
  display(a, n);
}

void shuffle(int a[], int n) {
  int random_index;
  for (int i = 0; i < n; i++) {
    random_index = rand() % n;
    swap(a[i], a[random_index]);
  }
}