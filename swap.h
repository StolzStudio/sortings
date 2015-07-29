#ifndef sorts_swap_h
#define sorts_swap_h

#define SWAP(type, a, b)  {                               \
    type c = *a;                                          \
    *a = *b;                                              \
    *b = c;                                               \
}

#endif
