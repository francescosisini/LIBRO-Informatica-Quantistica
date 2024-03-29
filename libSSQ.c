/************************************************************************
  libSSQ @2020 Scuola Sisini
  SPDX-License-Identifier: GPL-3.0-or-later
 ***********************************************************************/

#include <complex.h>
#include <stdio.h>
#include "libSSQ.h"

/*___________________________________________________
 *
 * Base STANDARD qubit singolo
 */
const base1 base_std1 =
  {
    {{1,0}},//0
    {{0,1}} //1
  };

/*___________________________________________________
 *
 * Base STANDARD 2qubits
 */
const base2 base_std2=
  {
    {{1,0,0,0}},//00
    {{0,1,0,0}},//01
    {{0,0,1,0}},//10
    {{0,0,0,1}} //11
  };

/*___________________________________________________
 *
 * Base STANDARD 3qubits
 */
const base3 base_std3=
  {
    {{1,0,0,0,0,0,0,0}},//00
    {{0,1,0,0,0,0,0,0}},//00
    {{0,0,1,0,0,0,0,0}},//00
    {{0,0,0,1,0,0,0,0}},//00

    {{0,0,0,0,1,0,0,0}},//00
    {{0,0,0,0,0,1,0,0}},//00
    {{0,0,0,0,0,0,1,0}},//00
    {{0,0,0,0,0,0,0,1}},//00
    
  };



/*___________________________________________________
 *
 * Base STANDARD opertori 1_1
 */
const base1_1 base_std1_1 =
  {
    {
      {1,0,
      0,0}
    }
    ,
    {
      {0,1,
      0,0}
    }
    ,
    {
      {0,0,
      1,0}
    }
    ,
    {
      {0,0,
      0,1}
    }
  };

/*___________________________________________________
 *
 * Base STANDARD opertori 2_2
 */
const base2_2 base_std2_2 =
  {
    {
      {1,0,0,0,
       0,0,0,0,
       0,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,1,0,0,
       0,0,0,0,
       0,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,1,0,
       0,0,0,0,
       0,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,1,
       0,0,0,0,
       0,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       1,0,0,0,
       0,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,1,0,0,
       0,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,1,0,
       0,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,1,
       0,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,0,
       1,0,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,0,
       0,1,0,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,0,
       0,0,1,0,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,0,
       0,0,0,1,
       0,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,0,
       0,0,0,0,
       1,0,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,0,
       0,0,0,0,
       0,1,0,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,0,
       0,0,0,0,
       0,0,1,0}
    }
    ,
    {
      {0,0,0,0,
       0,0,0,0,
       0,0,0,0,
       0,0,0,1}
    }
  };

/*___________________________________________________
 *
 * Base STANDARD opertori 3_3
 */
const base3_3 base_std3_3 =
  {
    1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,1,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,1,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,

    0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,1,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,1,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,1,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,1,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,1,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,1,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,1,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,1,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,1,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,1,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,1,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,1,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,1,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,1,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,1,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,1,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,1,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,1,0,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,1,0,0,
    0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,1,0,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,1,0,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,1,0,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,1,0,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,1,0,
    
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,1
  };
  
  
//--Servizio
void matrice_x_vettore2
(double complex v_out[2],elemento1_1 m,elemento1 v_in)
{
  for(int i=0;i<2;i++) v_out[i] = 0;
  
  for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
        {
          v_out[i]+=m.c[i][j]*v_in.c[j];
        }
    }
}
void matrice_x_vettore4
(double complex v_out[4],elemento2_2 m,elemento2 v_in)
{
  for(int i=0;i<4;i++) v_out[i] = 0;
  
  for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++)
        {
          v_out[i]+=m.c[i][j]*v_in.c[j];
        }
    }
}

void matrice_x_vettore8
(double complex v_out[8],elemento3_3 m,elemento3 v_in)
{
  for(int i=0;i<8;i++) v_out[i] = 0;
  
  for(int i=0;i<8;i++)
    {
      for(int j=0;j<8;j++)
        {
          v_out[i]+=m.c[i][j]*v_in.c[j];
        }
    }
}


/*____________________________________________________
 *
 * crea un ket di stato di ampiezze complesse
 * x e y sulla base b
 */
ket1
crea_ket1(double complex x, double complex y, base1 b)
{
  ket1 ket = {x,y,b};
  return ket;
}

/*____________________________________________________
 *
 * crea un ket di stato di due qubits ampiezze complesse
 * x1, y1, x2 e y2 sulla base b
 * come prodotto dei due key
 * non è possibile creare direttamente ket entangled
 */
ket2
crea_ket2(double complex x1, double complex y1,
          double complex x2, double complex y2,base2 b)
{
  ket2 ket ={x1*x2,x1*y2,y1*x2,y1*y2,b};
  return ket;
  
}

/*____________________________________________________
 *
 * crea un ket di stato di tre qubits ampiezze complesse
 */
ket3
crea_ket3(double complex x1, double complex y1,
          double complex x2, double complex y2,
          double complex x3, double complex y3,
          base3 b)
{
  ket3 ket = {
    x1*x2*x3,
    x1*x2*y3,
    x1*y2*x3,
    x1*y2*y3,

    y1*x2*x3,
    y1*x2*y3,
    y1*y2*x3,
    y1*y2*y3,b
  };
    return ket;
  
}

/*____________________________________________________
 *
 * crea un operatore (tensore 1_1) di coefficienti
 * complessi a11, a12, a21 e a22 sulla base b
 */
op1_1 crea_tensore1_1
(double complex a11,double complex a12,double complex a21,double complex a22, base1_1 b)
{
  op1_1 o = {a11,a12,a21,a22,b};
  return o;
}

/*____________________________________________________
 *
 * crea un operatore (tensore 2_2) di coefficienti
 * complessi a11, a12,...,a44 sulla base b
 */
op2_2 crea_tensore2_2
(double complex a11,double complex a12,double complex a13,double complex a14,
 double complex a21,double complex a22,double complex a23,double complex a24,
 double complex a31,double complex a32,double complex a33,double complex a34,
 double complex a41,double complex a42,double complex a43,double complex a44,
 base2_2 b
 )
{
  op2_2 o={a11,a12,a13,a14,a21,a22,a23,a24,a31,a32,a33,a34,a41,a42,a43,a44,b};
  return o;
}

/*____________________________________________________
 *
 * crea un operatore (tensore 3_3) di coefficienti
 * complessi a11, a12,...,a88 sulla base b
 */
op3_3 crea_tensore3_3
(double complex a11,double complex a12,double complex a13,double complex a14,
 double complex a15,double complex a16,double complex a17,double complex a18,

 double complex a21,double complex a22,double complex a23,double complex a24,
 double complex a25,double complex a26,double complex a27,double complex a28,

 double complex a31,double complex a32,double complex a33,double complex a34,
 double complex a35,double complex a36,double complex a37,double complex a38,

 double complex a41,double complex a42,double complex a43,double complex a44,
 double complex a45,double complex a46,double complex a47,double complex a48,

 double complex a51,double complex a52,double complex a53,double complex a54,
 double complex a55,double complex a56,double complex a57,double complex a58,

 double complex a61,double complex a62,double complex a63,double complex a64,
 double complex a65,double complex a66,double complex a67,double complex a68,
 
 double complex a71,double complex a72,double complex a73,double complex a74,
 double complex a75,double complex a76,double complex a77,double complex a78,

 double complex a81,double complex a82,double complex a83,double complex a84,
 double complex a85,double complex a86,double complex a87,double complex a88,
 
 base3_3 b
 )
{
  op3_3 o ={
    a11, a12, a13, a14,
    a15, a16, a17, a18,
    
    a21, a22, a23, a24,
    a25, a26, a27, a28,
    
    a31, a32, a33, a34,
    a35, a36, a37, a38,
    
    a41, a42, a43, a44,
    a45, a46, a47, a48,
    
    a51, a52, a53, a54,
    a55, a56, a57, a58,
    
    a61, a62, a63, a64,
    a65, a66, a67, a68,
    
    a71, a72, a73, a74,
    a75, a76, a77, a78,
    
    a81, a82, a83, a84,
    a85, a86, a87, a88,
    b
  };
  
  return o;
}

/*____________________________________________________
 *
 * Trasforma un ket tramite un operatore
 * 
 */
ket1 trasforma_ket1(op1_1 o,ket1 ket)
{
  ket1 ketp;

  //Preparazione array di servizio
  double complex v[2];
  elemento1 e[2] = {ket.b.e1,ket.b.e2};
  elemento1_1 ee_[2][2] = {o.b.e1e_1,o.b.e1e_2,o.b.e2e_1,o.b.e2e_2};
  double complex x[2] =  {ket.x,ket.y};
  double complex a[2][2] = {o.a11,o.a12,o.a21,o.a22};

  //Inizializzazione
  ketp.x = 0;
  ketp.y = 0;
  for(int k=0;k<2;k++)
    for(int i=0;i<2;i++)
      {
        //Il tensore o è svliluppato sulla base eie_j come:
        //o = a11*e1e_1+...+a22*e2e_2
        //Il ket ket è sviluppato sulla base ei come:
        //ket = x*e1+y*e2
        //Il prodottotto o*ket si sviluppa linearmente come:
        //o*ket=(a11*e1e_1+...+a22*e2e_2)*(x*e1+y*e2) quindi:
        //o*ket=e1e_1(e1)*a11*x+... dove si ricorda che
        //e1e_1(e1) è un prodotto matrice x colonna
        for(int j=0;j<2;j++)
          {
            matrice_x_vettore2(v,ee_[i][j],e[k]);
            ketp.x += v[0]*a[i][j]*x[k];
            ketp.y += v[1]*a[i][j]*x[k];
          }
      }
  ketp.b = ket.b;
  return ketp;
}

ket2 trasforma_ket2(op2_2 o,ket2 ket)
{
  ket2 ketp;
  ketp.x11 = ketp.x12 = ketp.x21 = ketp.x22 = 0;
  //Preparazione array di servizio
  double complex v[4];
  elemento2 e[4] = {ket.b.e1f1,ket.b.e1f2,ket.b.e2f1,ket.b.e2f2};
  elemento2_2 ee_[4][4] = {
    o.b.e1f1e_1f_1,o.b.e1f1e_1f_2,o.b.e1f1e_2f_1,o.b.e1f1e_2f_2,
    o.b.e1f2e_1f_1,o.b.e1f2e_1f_2,o.b.e1f2e_2f_1,o.b.e1f2e_2f_2,
    o.b.e2f1e_1f_1,o.b.e2f1e_1f_2,o.b.e2f1e_2f_1,o.b.e2f1e_2f_2,
    o.b.e2f2e_1f_1,o.b.e2f2e_1f_2,o.b.e2f2e_2f_1,o.b.e2f2e_2f_2
  };
  double complex x[4] =  {ket.x11,ket.x12,ket.x21,ket.x22};
  double complex a[4][4] = {
    o.a11,o.a12,o.a13,o.a14,
    o.a21,o.a22,o.a23,o.a24,
    o.a31,o.a32,o.a33,o.a34,
    o.a41,o.a42,o.a43,o.a44
  };

   for(int k=0;k<4;k++)
    for(int i=0;i<4;i++)
      {
        //Per una spiegazione, vedi i commenti di trasforma_ket1
        for(int j=0;j<4;j++)
          {
            matrice_x_vettore4(v,ee_[i][j],e[k]);
            
            ketp.x11 += v[0]*a[i][j]*x[k];
            ketp.x12 += v[1]*a[i][j]*x[k];
            ketp.x21 += v[2]*a[i][j]*x[k];
            ketp.x22 += v[3]*a[i][j]*x[k];
          }
      }
   ketp.b = ket.b;
   return ketp;
}

ket3 trasforma_ket3(op3_3 o,ket3 ket)
{
  ket3 ketp;
  ketp.x111 = ketp.x112 = ketp.x121 = ketp.x122 =
    ketp.x211 = ketp.x212 = ketp.x221 = ketp.x222 = 0;

  //Preparazione array di servizio
  double complex v[8];

  elemento3 e[8] = {
    ket.b.e1f1g1,
    ket.b.e1f1g2,
    ket.b.e1f2g1,
    ket.b.e1f2g2,
    ket.b.e2f1g1,
    ket.b.e2f1g2,
    ket.b.e2f2g1,
    ket.b.e2f2g2
    };
  
  elemento3_3 ee_[8][8] = {
    o.b.e1f1g1e_1f_1g_1,
    o.b.e1f1g1e_1f_1g_2,
    o.b.e1f1g1e_1f_2g_1,
    o.b.e1f1g1e_1f_2g_2,
    o.b.e1f1g1e_2f_1g_1,
    o.b.e1f1g1e_2f_1g_2,
    o.b.e1f1g1e_2f_2g_1,
    o.b.e1f1g1e_2f_2g_2,

    o.b.e1f1g2e_1f_1g_1,
    o.b.e1f1g2e_1f_1g_2,
    o.b.e1f1g2e_1f_2g_1,
    o.b.e1f1g2e_1f_2g_2,
    o.b.e1f1g2e_2f_1g_1,
    o.b.e1f1g2e_2f_1g_2,
    o.b.e1f1g2e_2f_2g_1,
    o.b.e1f1g2e_2f_2g_2,

    o.b.e1f2g1e_1f_1g_1,
    o.b.e1f2g1e_1f_1g_2,
    o.b.e1f2g1e_1f_2g_1,
    o.b.e1f2g1e_1f_2g_2,
    o.b.e1f2g1e_2f_1g_1,
    o.b.e1f2g1e_2f_1g_2,
    o.b.e1f2g1e_2f_2g_1,
    o.b.e1f2g1e_2f_2g_2,

    o.b.e1f2g2e_1f_1g_1,
    o.b.e1f2g2e_1f_1g_2,
    o.b.e1f2g2e_1f_2g_1,
    o.b.e1f2g2e_1f_2g_2,
    o.b.e1f2g2e_2f_1g_1,
    o.b.e1f2g2e_2f_1g_2,
    o.b.e1f2g2e_2f_2g_1,
    o.b.e1f2g2e_2f_2g_2,

    //-----------------

    o.b.e2f1g1e_1f_1g_1,
    o.b.e2f1g1e_1f_1g_2,
    o.b.e2f1g1e_1f_2g_1,
    o.b.e2f1g1e_1f_2g_2,
    o.b.e2f1g1e_2f_1g_1,
    o.b.e2f1g1e_2f_1g_2,
    o.b.e2f1g1e_2f_2g_1,
    o.b.e2f1g1e_2f_2g_2,

    o.b.e2f1g2e_1f_1g_1,
    o.b.e2f1g2e_1f_1g_2,
    o.b.e2f1g2e_1f_2g_1,
    o.b.e2f1g2e_1f_2g_2,
    o.b.e2f1g2e_2f_1g_1,
    o.b.e2f1g2e_2f_1g_2,
    o.b.e2f1g2e_2f_2g_1,
    o.b.e2f1g2e_2f_2g_2,

    o.b.e2f2g1e_1f_1g_1,
    o.b.e2f2g1e_1f_1g_2,
    o.b.e2f2g1e_1f_2g_1,
    o.b.e2f2g1e_1f_2g_2,
    o.b.e2f2g1e_2f_1g_1,
    o.b.e2f2g1e_2f_1g_2,
    o.b.e2f2g1e_2f_2g_1,
    o.b.e2f2g1e_2f_2g_2,

    o.b.e2f2g2e_1f_1g_1,
    o.b.e2f2g2e_1f_1g_2,
    o.b.e2f2g2e_1f_2g_1,
    o.b.e2f2g2e_1f_2g_2,
    o.b.e2f2g2e_2f_1g_1,
    o.b.e2f2g2e_2f_1g_2,
    o.b.e2f2g2e_2f_2g_1,
    o.b.e2f2g2e_2f_2g_2,
    };

  double complex x[8] =  {
    ket.x111,
    ket.x112,
    ket.x121,
    ket.x122,
    ket.x211,
    ket.x212,
    ket.x221,
    ket.x222
  };
  
  double complex a[8][8] = {
    o.a11,o.a12,o.a13,o.a14,o.a15,o.a16,o.a17,o.a18,
    o.a21,o.a22,o.a23,o.a24,o.a25,o.a26,o.a27,o.a28,
    o.a31,o.a32,o.a33,o.a34,o.a35,o.a36,o.a37,o.a38,
    o.a41,o.a42,o.a43,o.a44,o.a45,o.a46,o.a47,o.a48,

    o.a51,o.a52,o.a53,o.a54,o.a55,o.a56,o.a57,o.a58,
    o.a61,o.a62,o.a63,o.a64,o.a65,o.a66,o.a67,o.a68,
    o.a71,o.a72,o.a73,o.a74,o.a75,o.a76,o.a77,o.a78,
    o.a81,o.a82,o.a83,o.a84,o.a85,o.a86,o.a87,o.a88
  };

   for(int k=0;k<8;k++)
    for(int i=0;i<8;i++)
      {
        //Per una spiegazione, vedi i commenti di trasforma_ket1
        for(int j=0;j<8;j++)
          {
            matrice_x_vettore8(v,ee_[i][j],e[k]);
            
            ketp.x111 += v[0]*a[i][j]*x[k];
            ketp.x112 += v[1]*a[i][j]*x[k];
            ketp.x121 += v[2]*a[i][j]*x[k];
            ketp.x122 += v[3]*a[i][j]*x[k];
            ketp.x211 += v[4]*a[i][j]*x[k];
            ketp.x212 += v[5]*a[i][j]*x[k];
            ketp.x221 += v[6]*a[i][j]*x[k];
            ketp.x222 += v[7]*a[i][j]*x[k];
          }
        
      }
   ketp.b = ket.b;
   return ketp;
}








