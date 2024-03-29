/**********************************************************************
 * Copyright (C) 2016 and later: Unicode, Inc. and others.
 * License & terms of use: http://www.unicode.org/copyright.html#License
 ***********************************************************************
 ***********************************************************************
 * COPYRIGHT:
 * Copyright (c) 1999-2002, International Business Machines Corporation and
 * others. All Rights Reserved.
 ***********************************************************************/

#include "unicode/unistr.h"
#include "unicode/msgfmt.h"
#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(int argc, char **argv) {

    UErrorCode status = U_ZERO_ERROR;
    UnicodeString str;

    printf("Message: ");
    uprintf(str);
    printf("\n");

    printf("Exiting successfully\n");
    return 0;
}
