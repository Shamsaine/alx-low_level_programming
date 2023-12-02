#include "main.h"

/**
 * error_exit - co

void error_exit(int code, const char *format, ...) {
    va_list args;
    va_start(args, format);
    dprintf(STDERR_FILENO, format, args);
    va_end(args);
    exit(code);
}
