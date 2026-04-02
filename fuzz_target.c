#include <stdint.h>
#include <stddef.h>

void process_input(const uint8_t *data, size_t size);

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size < 1) return 0;
    process_input(data, size);
    return 0;
}
