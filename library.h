#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
using namespace std;

//display the first n elements of an array
void display(const int a[], int n);

//sort elements the first n elements of an array in ascending order
void insertion_sort(int a[], int n);

//shuffle the first n elements of an array
void shuffle(int a[], int n);

//sort elements the first n elements of an array in descending order
void selection_sort(int a[], int n);



#endif // LIBRARY_H
