#include "cpu.h"
#include "stdint.h"
#include "decode.h"

/*
 * GET_BITS
 * Macro para facilitar desconstrução do dado bruto, composto por shift para direita e mascara de bits
 */
#define GET_BITS(data, shift, mask) (((data) >> (shift)) & (mask))

instruction buildInsR(uint32_t data) {
    instruction inst;


}

instruction decode(uint32_t data) {
    instruction inst;
    uint16_t testIns = GET_BITS(data, 24, 0xFF);

    switch (testIns) {
        case 0:  // type R
            return buildInsR(data);
        case 1:  // type I

    }
}