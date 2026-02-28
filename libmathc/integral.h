#include <math.h>

inline int factorial (int x);
inline int factorial (int x) {
    int result = (int) (x);
    while ((x - 1) > 0) {result *= (x - 1); 
    x -= 1;} return result;
}


