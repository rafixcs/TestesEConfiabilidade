#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./payment.h"

int payment(float value, char status[15]) {

    if (value <= 0.009f || value >= 10000.0f) {
        return 1;
    } else if(
        !(strcmp("regular", &status)) ||
        !(strcmp("estudante", &status)) ||
        !(strcmp("aposentado", &status)) ||
        !(strcmp("VIP", &status))) {
            return 2;
    } else {
        return 0;
    }
}
