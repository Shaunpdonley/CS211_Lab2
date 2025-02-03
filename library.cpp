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
  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (a[j - 1] > a[j]) {
        swap(a[j - 1], a[j]);
      } //end of if
    } //end of loop on j
  } //end of loop on i
} //end of insertion_sort

void shuffle(int a[], int n) {
  int random_index;


  for(int i = 0; i < n ; i++) {

    random_index = rand() % n;
    swap(a[i], a[random_index]);

  }

}
