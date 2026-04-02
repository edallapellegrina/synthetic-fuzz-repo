#include <stdint.h>
#include <string.h>
#include <stdlib.h>

// Vulnerable function: heap buffer overflow when input starts with "FUZ"
void process_input(const uint8_t *data, size_t size) {
    char *buf = (char *)malloc(4);
    if (size >= 3 && data[0] == 'F' && data[1] == 'U' && data[2] == 'Z') {
        // BUG: writes 8 bytes into a 4-byte buffer
        memcpy(buf, data, 8);
    }
    free(buf);
}
