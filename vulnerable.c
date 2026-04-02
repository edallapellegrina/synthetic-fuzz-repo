#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void process_input(const uint8_t *data, size_t size) {
    char *buf = (char *)malloc(4);
    if (size >= 64 && data[0] == 'F' && data[1] == 'U' && data[2] == 'Z') {
        memcpy(buf, data, 64);
    }
    free(buf);
}
