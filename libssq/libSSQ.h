/************************************************************************
 *
 * libSSQ @2020 Scuola Sisini
 * Licenza GPL3 
 * 
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once
#ifndef LIBSSQ_H
#define LIBSSQ_H

#include <complex.h>

/*___________________SINGOLO QUBIT_________________*/

/*___________________________________________________
 *
 * Elemento e in  V
 */
typedef struct
{
  double complex c[2];
} elemento1;

/*___________________________________________________
 *
 * Base qubit singolo
 */
typedef struct
{
  elemento1 e1;
  elemento1 e2;

} base1;



/*___________________________________________________
 *
 * Un ket di ampiezze complesse x e y sulla base b
 */
typedef struct
{
  double complex x,y;
  base1 b;
} ket1;


/*___________DOPERATORE TENSORIALE_1X1_____________*/

/*___________________________________________________
 *
 * Elemento  ee* in V(x)V*
 */
typedef struct
{
  double complex c[2][2];
} elemento1_1;

/*___________________________________________________
 *
 * Base tensoori V@V*
 */
typedef struct
{
  elemento1_1 e1e_1; //00
  elemento1_1 e1e_2; //01
  elemento1_1 e2e_1; //10
  elemento1_1 e2e_2; //11
  

} base1_1;

/*___________________________________________________
 *
 * Un operatore sullo spazio 11
 * di componenti a11, a12, a21, a22 sull base b
 *
 */
typedef struct
{
  double complex a11,a12,a21,a22;
  base1_1 b;
} op1_1;


/*____________________DOPPIO QUBIT__________________*/

/*___________________________________________________
 *
 * Elemento  ee in V(x)V
 */
typedef struct
{
  double complex c[4];
} elemento2;

/*___________________________________________________
 *
 * Base 2 qubits
 */
typedef struct
{
  elemento2 e1f1; //00
  elemento2 e1f2; //01
  elemento2 e2f1; //10
  elemento2 e2f2; //11
  

} base2;

/*___________________________________________________
 *
 * Un ket di 2 qubit di ampiezze complesse x1 e y1
 * e x2, y2  sulla base b
 *
 */
typedef struct
{
  double complex x11,x12,x21,x22;
  base2 b;
} ket2;

/*___________DOPERATORE TENSORIALE_2X2_____________*/

/*___________________________________________________
 *
 * Elemento  efe*f* in V(x)V(x)V*(x)V*
 */
typedef struct
{
  double complex c[4][4];
} elemento2_2;

/*___________________________________________________
 *
 * Base tensoori V@V*
 */
typedef struct
{
  //-riga 1
  elemento2_2 e1f1e_1f_1; 
  elemento2_2 e1f1e_1f_2; 
  elemento2_2 e1f1e_2f_1; 
  elemento2_2 e1f1e_2f_2;
  //-riga 2
  elemento2_2 e1f2e_1f_1; 
  elemento2_2 e1f2e_1f_2; 
  elemento2_2 e1f2e_2f_1; 
  elemento2_2 e1f2e_2f_2;
  //-riga 3
  elemento2_2 e2f1e_1f_1; 
  elemento2_2 e2f1e_1f_2; 
  elemento2_2 e2f1e_2f_1; 
  elemento2_2 e2f1e_2f_2;
  //-riga 4
  elemento2_2 e2f2e_1f_1; 
  elemento2_2 e2f2e_1f_2; 
  elemento2_2 e2f2e_2f_1; 
  elemento2_2 e2f2e_2f_2;

} base2_2;

/*___________________________________________________
 *
 * Un operatore sullo spazio 11
 * di componenti a11, a12, a21, a22 sull base b
 *
 */
typedef struct
{
  double complex a11,a12,a13,a14,
    a21,a22,a23,a24,
    a31,a32,a33,a34,
    a41,a42,a43,a44;
  base2_2 b;
} op2_2;


/*____________________TRIPLO QUBIT__________________*/

/*___________________________________________________
 *
 * Elemento  eee in V(x)V(x)V
 */
typedef struct
{
  double complex c[8];
} elemento3;

/*___________________________________________________
 *
 * Base 3 qubits
 */
typedef struct
{
  elemento3 e1f1g1; //000
  elemento3 e1f1g2; //001
  elemento3 e1f2g1; //010
  elemento3 e1f2g2; //011
  elemento3 e2f1g1; //100
  elemento3 e2f1g2; //101
  elemento3 e2f2g1; //110
  elemento3 e2f2g2; //111
  
} base3;

/*___________________________________________________
 *
 * Un ket di 3 qubit di ampiezze complesse x1 e y1
 * , x2, y2 e x3, y3  sulla base b
 *
 */
typedef struct
{
  double complex x111,x112,x121,x122,x211,x212,x221,x222;
  base3 b;
} ket3;

/*___________DOPERATORE TENSORIALE_3X3_____________*/

/*___________________________________________________
 *
 * Elemento  efe*f* in V(x)V(x)V*(x)V*
 */
typedef struct
{
  double complex c[8][8];
} elemento3_3;

/*___________________________________________________
 *
 * Base tensoori V@V@V@V*@V*@V*
 */
typedef struct
{
  //-riga 1
  elemento3_3 e1f1g1e_1f_1g_1;
  elemento3_3 e1f1g1e_1f_1g_2;
  elemento3_3 e1f1g1e_1f_2g_1;
  elemento3_3 e1f1g1e_1f_2g_2;
  elemento3_3 e1f1g1e_2f_1g_1;
  elemento3_3 e1f1g1e_2f_1g_2;
  elemento3_3 e1f1g1e_2f_2g_1;
  elemento3_3 e1f1g1e_2f_2g_2;
   //-riga 2
  elemento3_3 e1f1g2e_1f_1g_1;
  elemento3_3 e1f1g2e_1f_1g_2;
  elemento3_3 e1f1g2e_1f_2g_1;
  elemento3_3 e1f1g2e_1f_2g_2;
  elemento3_3 e1f1g2e_2f_1g_1;
  elemento3_3 e1f1g2e_2f_1g_2;
  elemento3_3 e1f1g2e_2f_2g_1;
  elemento3_3 e1f1g2e_2f_2g_2;
   //-riga 3
  elemento3_3 e1f2g1e_1f_1g_1;
  elemento3_3 e1f2g1e_1f_1g_2;
  elemento3_3 e1f2g1e_1f_2g_1;
  elemento3_3 e1f2g1e_1f_2g_2;
  elemento3_3 e1f2g1e_2f_1g_1;
  elemento3_3 e1f2g1e_2f_1g_2;
  elemento3_3 e1f2g1e_2f_2g_1;
  elemento3_3 e1f2g1e_2f_2g_2;
   //-riga 4
  elemento3_3 e1f2g2e_1f_1g_1;
  elemento3_3 e1f2g2e_1f_1g_2;
  elemento3_3 e1f2g2e_1f_2g_1;
  elemento3_3 e1f2g2e_1f_2g_2;
  elemento3_3 e1f2g2e_2f_1g_1;
  elemento3_3 e1f2g2e_2f_1g_2;
  elemento3_3 e1f2g2e_2f_2g_1;
  elemento3_3 e1f2g2e_2f_2g_2; 

  //-riga 1
  elemento3_3 e2f1g1e_1f_1g_1;
  elemento3_3 e2f1g1e_1f_1g_2;
  elemento3_3 e2f1g1e_1f_2g_1;
  elemento3_3 e2f1g1e_1f_2g_2;
  elemento3_3 e2f1g1e_2f_1g_1;
  elemento3_3 e2f1g1e_2f_1g_2;
  elemento3_3 e2f1g1e_2f_2g_1;
  elemento3_3 e2f1g1e_2f_2g_2;
   //-riga 2
  elemento3_3 e2f1g2e_1f_1g_1;
  elemento3_3 e2f1g2e_1f_1g_2;
  elemento3_3 e2f1g2e_1f_2g_1;
  elemento3_3 e2f1g2e_1f_2g_2;
  elemento3_3 e2f1g2e_2f_1g_1;
  elemento3_3 e2f1g2e_2f_1g_2;
  elemento3_3 e2f1g2e_2f_2g_1;
  elemento3_3 e2f1g2e_2f_2g_2;
   //-riga 3
  elemento3_3 e2f2g1e_1f_1g_1;
  elemento3_3 e2f2g1e_1f_1g_2;
  elemento3_3 e2f2g1e_1f_2g_1;
  elemento3_3 e2f2g1e_1f_2g_2;
  elemento3_3 e2f2g1e_2f_1g_1;
  elemento3_3 e2f2g1e_2f_1g_2;
  elemento3_3 e2f2g1e_2f_2g_1;
  elemento3_3 e2f2g1e_2f_2g_2;
   //-riga 4
  elemento3_3 e2f2g2e_1f_1g_1;
  elemento3_3 e2f2g2e_1f_1g_2;
  elemento3_3 e2f2g2e_1f_2g_1;
  elemento3_3 e2f2g2e_1f_2g_2;
  elemento3_3 e2f2g2e_2f_1g_1;
  elemento3_3 e2f2g2e_2f_1g_2;
  elemento3_3 e2f2g2e_2f_2g_1;
  elemento3_3 e2f2g2e_2f_2g_2;
  
} base3_3;

/*___________________________________________________
 *
 * Un operatore sullo spazio 111
 * di componenti a11, a12,...,a88 sull base b
 *
 */
typedef struct
{
  double complex
  a11,a12,a13,a14,a15,a16,a17,a18,
    a21,a22,a23,a24,a25,a26,a27,a28,
    a31,a32,a33,a34,a35,a36,a37,a38,
    a41,a42,a43,a44,a45,a46,a47,a48,
    a51,a52,a53,a54,a55,a56,a57,a58,
    a61,a62,a63,a64,a65,a66,a67,a68,
    a71,a72,a73,a74,a75,a76,a77,a78,
    a81,a82,a83,a84,a85,a86,a87,a88;
  base3_3 b;
} op3_3;



/*_____________Funzioni______________________________*/

/*____________________________________________________
 *
 * crea un ket di stato di ampiezze complesse
 * x e y sulla base b
 */
ket1
crea_ket1(double complex x, double complex y, base1 b);

/*____________________________________________________
 *
 * crea un ket di stato di due qubits ampiezze complesse
 * x1, y1, x2 e y2 sulla base b
 * come prodotto dei due key
 * non è possibile creare direttamente ket entangled
 */
ket2
crea_ket2(double complex x1, double complex y1,
          double complex x2, double complex y2,base2 b);

/*____________________________________________________
 *
 * crea un ket di stato di tre qubits ampiezze complesse
 */
ket3
crea_ket3(double complex x1, double complex y1,
          double complex x2, double complex y2,
          double complex x3, double complex y3,
          base3 b);




/*____________________________________________________
 *
 * crea un operatore (tensore 1_1) di coefficienti
 * complessi a11, a12, a21 e a22 sulla base b
 */
op1_1 crea_tensore1_1
(double complex a11,double complex a12,double complex a21,double complex a22, base1_1 b);

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
 );

/*____________________________________________________
 *
 * crea un operatore (tensore 3_3) di coefficienti
 * complessi a11, a12,...,a44 sulla base b
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
 );



/*____________________________________________________
 *
 * Trasforma un ket tramite un operatore
 * 
 */
ket1 trasforma_ket1(op1_1 o,ket1 ket);

ket2 trasforma_ket2(op2_2 o,ket2 ket);

ket3 trasforma_ket3(op3_3 o,ket3 ket);
  
#endif


