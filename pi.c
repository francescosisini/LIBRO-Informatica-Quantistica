/************************************************************************
 Example to test basics of complex mathematics with complex library
 This page is part of release 4.15 of the Linux man-pages project.
 SPDX-License-Identifier: GPL-2.0-or-later
************************************************************************/

/* check that exp(i * pi) == -1 */
#include <math.h>        /* for atan */
#include <stdio.h>
#include <complex.h>

int
main(void)
{
    double pi = 4 * atan(1.0);
    double complex z = cexp(I * pi);
    printf("%f + %f * i\n", creal(z), cimag(z));
}