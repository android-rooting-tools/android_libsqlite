#include <unistd.h>

extern ssize_t pread64(int, void *, size_t, off64_t);
extern ssize_t pwrite64(int, const void *, size_t, off64_t);

#include "dist/sqlite3.c"
