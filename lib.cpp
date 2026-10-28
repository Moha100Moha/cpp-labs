#include "lib.h"

#include "version.h"

int version() {
    return PROJECT_VERSION_PATCH;
}

const char *version_string() {
    return PROJECT_VERSION;
}