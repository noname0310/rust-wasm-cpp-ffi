#pragma once

typedef unsigned int size_t;

extern "C" {
    void* allocate(size_t size);
    void deallocate(void* ptr, size_t size);
}

extern "C" {
    int test_function(int i);

    int allocation_test(int size);
}
