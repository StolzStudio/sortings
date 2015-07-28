#ifndef sorts_selection_sort_h
#define sorts_selection_sort_h

#ifndef sorts_swap_h
#include "../swap.h"

#endif

#define SELECTION_SORT(type, a, length, compare)  {       \
    for (int i = 0; i < length - 1; i++)  {               \
        int min = i;                                      \
        for (int j = i + 1; j < length; j++)  {           \
            if (compare(&a[j], &a[min]) < 0)  {           \
                min = j;                                  \
            }                                             \
        }                                                 \
        SWAP(type, &a[i], &a[min]);                       \
    }                                                     \
}


#endif
