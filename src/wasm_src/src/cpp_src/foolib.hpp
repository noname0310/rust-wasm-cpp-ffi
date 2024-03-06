#pragma once

typedef unsigned int size_t;

extern "C" {
    void set_allocator(void* (*alloc)(size_t), void (*dealloc)(void*, size_t));

    int test_function(int i);

    int allocation_test(int size);
}
