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
  int total_swaps = 0;
  int total_comparisons = 0;

  for (int i = 1; i < n; i++) {
    int reference = a[i];
    int j = i - 1;
    int swaps = 0;
    int comparisons = 0;
    cout << "Pass: " << i << endl;

    while (j >= 0 && a[j] > reference) {
      cout << "Performing comparison" << endl;
      comparisons++;
      cout << "Performing swap" << endl;
      a[j + 1] = a[j];
      j--;
      swaps++;
    }

    comparisons++; // Increment for the final comparison that fails
    a[j + 1] = reference;

    total_swaps += swaps;
    total_comparisons += comparisons;

    cout << "Swaps: " << swaps << endl;
    cout << "Comparisons: " << comparisons << endl;
    display(a, n);
  }

  cout << "Final array: " << endl;
  display(a, n);
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