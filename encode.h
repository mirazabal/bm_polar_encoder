#ifndef ENCODE_BM_POLAR_H
#define ENCODE_BM_POLAR_H 

#include <stdint.h>
#include <stdlib.h>

void nr_polar_uxG2(uint8_t* D2, uint8_t const* u, size_t N);

void nr_polar_uxG(uint64_t *D, const uint64_t *u, uint64_t g_n[512][8], uint16_t N);

#endif
