#ifndef DEFINES_DISPLAY_H_
#define DEFINES_DISPLAY_H_
#include <avr/io.h>
/*******    DEFINES DISPLAY   *******/
#define DISPLAY_A PORTB0
#define DISPLAY_B PORTB1
#define DISPLAY_C PORTB2
#define DISPLAY_D PORTB3
#define DISPLAY_E PORTB4
#define DISPLAY_F PORTB5
#define DISPLAY_G PORTB7
#define DISPLAY_MULTIPLEX_KEY_LEFT PORTC0
#define DISPLAY_MULTIPLEX_KEY_RIGH PORTC1
#define DISPLAY_UP_0 ((1<<DISPLAY_A)|(1<<DISPLAY_B)|(1<<DISPLAY_C)|(1<<DISPLAY_D)|(1<<DISPLAY_E)|(1<<DISPLAY_F))// ESCREVE 0
#define DISPLAY_UP_1 ((1<<DISPLAY_B)|(1<<DISPLAY_C)) // ESCREVE 1
#define DISPLAY_UP_2 ((1<<DISPLAY_A)|(1<<DISPLAY_B)|(1<<DISPLAY_D)|(1<<DISPLAY_E)|(1<<DISPLAY_G))// ESCREVE 2
#define DISPLAY_UP_3 ((1<<DISPLAY_A)|(1<<DISPLAY_B)|(1<<DISPLAY_C)|(1<<DISPLAY_D)|(1<<DISPLAY_G))// ESCREVE 3
#define DISPLAY_UP_4 ((1<<DISPLAY_B)|(1<<DISPLAY_C)|(1<<DISPLAY_G)|(1<<DISPLAY_F))// ESCREVE 4
#define DISPLAY_UP_5 ((1<<DISPLAY_F)|(1<<DISPLAY_C)|(1<<DISPLAY_D)|(1<<DISPLAY_A)|(1<<DISPLAY_G))// ESCREVE 5
#define DISPLAY_UP_6 ((1<<DISPLAY_A)|(1<<DISPLAY_C)|(1<<DISPLAY_D)|(1<<DISPLAY_E)|(1<<DISPLAY_F)|(1<<DISPLAY_G))// ESCREVE 6
#define DISPLAY_UP_7 ((1<<DISPLAY_A)|(1<<DISPLAY_B)|(1<<DISPLAY_C))// ESCREVE 7
#define DISPLAY_UP_8 ((1<<DISPLAY_A)|(1<<DISPLAY_B)|(1<<DISPLAY_C)|(1<<DISPLAY_D)|(1<<DISPLAY_E)|(1<<DISPLAY_F)|(1<<DISPLAY_G))// ESCREVE 8
#define DISPLAY_UP_9 ((1<<DISPLAY_A)|(1<<DISPLAY_B)|(1<<DISPLAY_C)|(1<<DISPLAY_D)|(1<<DISPLAY_F)|(1<<DISPLAY_G))// ESCREVE 9
#define DISPLAY_UP_C ((1<<DISPLAY_A)|(1<<DISPLAY_D)|(1<<DISPLAY_E)|(1<<DISPLAY_F)) //ESCREVE C
#define DISPLAY_UP_L ((1<<DISPLAY_D)|(1<<DISPLAY_E)|(1<<DISPLAY_F)) //ESCREVE L
#define DISPLAY_UP_u ((1<<DISPLAY_C)|(1<<DISPLAY_D)|(1<<DISPLAY_E))//ESCREVE u
#define DISPLAY_UP_graus ((1<<DISPLAY_A)|(1<<DISPLAY_B)|(1<<DISPLAY_F)|(1<<DISPLAY_G))//ESCREVE �
#define DISPLAY_CLR (0)
#define DISPLAY_RETURN_PORT_MULTIPLEX(MULTIPLEX_FLAG) ((MULTIPLEX_FLAG))?((1<<(DISPLAY_MULTIPLEX_KEY_RIGH))):((1<<(DISPLAY_MULTIPLEX_KEY_LEFT)))
#define DISPLAY_MULTIPLEX_UP_ASSINATURA_TEMPERATURA(MULTIPLEX_FLAG) (MULTIPLEX_FLAG)?(DISPLAY_UP_graus):(DISPLAY_UP_C)
#define DISPLAY_MULTIPLEX_UP_ASSINATURA_LUMINOSIDADE(MULTIPLEX_FLAG) (MULTIPLEX_FLAG)?(DISPLAY_UP_L):(DISPLAY_UP_u)

/************************************************************************/
/* FUN��ES                                                              */
/************************************************************************/
void DISPLAY_FUNCTION_UP_NUMBER(unsigned char NUMBER);
#endif /* DEFINES_DISPLAY_H_ */