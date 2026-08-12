#include <bits/stdc++.h>
#include <cuda_runtime.h>

using namespace std;

class DeviceBuffer {
    float* ptr;

public:
    // Constructor
    DeviceBuffer(size_t n) {
        cudaMalloc(&ptr, n * sizeof(float));
    }

    // Destructor
    ~DeviceBuffer() {
        cudaFree(ptr);
    }

    // Copy constructor
    DeviceBuffer(const DeviceBuffer&) = delete;
    
    // Copy assignment operator
    DeviceBuffer& operator=(const DeviceBuffer&) = delete;

    // Move constructor
    DeviceBuffer(DeviceBuffer&& other) noexcept
        : ptr(other.ptr)
    {
        other.ptr = nullptr;
    }

    // Move assignment operator
    DeviceBuffer& operator=(DeviceBuffer&& other) noexcept {
        if(this != &other){
            cudaFree(ptr);
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }
};

int main() {

    return 0;
}

