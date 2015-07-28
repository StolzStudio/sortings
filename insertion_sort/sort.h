#ifndef sorts_insertion_sort_h
#define sorts_insertion_sort_h

#ifndef sorts_swap_h
#include "../swap.h"

#endif

#define INSERTION_SORT(type, a, length, compare)  {                                \
    for (int i = 1; i < length; i++)  {                                            \
        for (int j = i; j > 0 && compare(&a[j - 1], &a[j]) > 0; j--)  {            \
            SWAP(type, &a[j - 1], &a[j])                                           \
        }                                                                          \
    }                                                                              \
}


#endif
