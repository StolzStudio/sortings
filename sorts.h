#ifndef __sorts__
#define __sorts__

void swap(int* a, int* b);
void selection_sort(int* a, int length, int (*foo)(const void*, const void*));
void quickSort(int* a, int left, int right, int (*foo)(const void*, const void*));

#include "bubble_sort/sort.h"
#include "insertion_sort/sort.h"
#include "selection_sort/sort.h"
#include "quick_sort/sort.h"

#endif /* defined(__test_sorts__sorts__) */

