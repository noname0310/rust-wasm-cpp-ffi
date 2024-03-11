#include "foolib.hpp"

extern "C" {
    int test_function(int i) {
        return i + 1;
    }

    int allocation_test(int size) {
        int* ptr = (int*)allocate(size * sizeof(int));
        ptr[0] = 234334;
        int result = ptr[0];
        deallocate(ptr, size * sizeof(int));
        return result;
    }
}
