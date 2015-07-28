#ifndef sorts_bubble_sort_h
#define sorts_bubble_sort_h

#ifndef sorts_swap_h
#include "../swap.h"

#endif

#define BUBBLE_SORT(type, a, length, compare)  {          \
    for (int i = 0; i < length - 1; i++)  {               \
        for (int j = i + 1; j < length; j++)  {           \
            if (compare(&a[i],&a[j]) > 0)  {              \
                SWAP(type, &a[i], &a[j]);                 \
            }                                             \
        }                                                 \
    }                                                     \
}

#endif
