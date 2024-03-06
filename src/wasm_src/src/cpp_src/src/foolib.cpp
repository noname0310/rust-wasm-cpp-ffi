#include "foolib.h"

void* (*allocate)(size_t);
void (*deallocate)(void*, size_t);

extern "C" {
    void set_allocator(void* (*alloc)(size_t), void (*dealloc)(void*, size_t)) {
        allocate = alloc;
        deallocate = dealloc;
    }

    int test_function(int i) {
        return i + 1;
    }

    int allocation_test(int size) {
        int* ptr = (int*)allocate(size * sizeof(int));
        ptr[0] = 42234;
        int result = ptr[0];
        deallocate(ptr, size * sizeof(int));
        return result;
    }
}
