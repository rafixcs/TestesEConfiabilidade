#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./payment.h"

int payment(float value, char status[15]) {

char str1[15];
char str2[15];
char str3[15];
char str4[15];

strcpy(str1, "regular");
strcpy(str2, "estudante");
strcpy(str3, "aposentado");
strcpy(str4, "VIP");
/*
	printf("Status=> %s",status);
	printf("Status retorno=> %d",strcmp(str2, status)); */
    if (value < 0.01f || value > 99999.0f) {
        return 1;
    } else if(
        (strcmp(str1, status)!=0) &&
        (strcmp(str2, status)!=0) &&
        (strcmp(str3, status)!=0) &&
        (strcmp(str4, status)!=0)) {
            return 2;
    } else {
        return 0;
    }
}
