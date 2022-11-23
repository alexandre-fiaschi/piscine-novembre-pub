#include <stdio.h>
#include "correggi/ex00/ft_putchar.c"
#include "correggi/ex01/ft_print_alphabet.c"
#include "correggi/ex02/ft_print_reverse_alphabet.c"
#include "correggi/ex03/ft_print_numbers.c"
#include "correggi/ex04/ft_is_negative.c"
#include "correggi/ex05/ft_print_comb.c"
#include "correggi/ex06/ft_print_comb2.c"
#include "correggi/ex07/ft_putnbr.c"
/*#include "correggi/ex08/ft_print_combn.c"*/


int main(void)

{
    //Esercizio 00 ///////////////
    char c = 'A';

    //Esercizio 04 ///////////////
    int x = 0;

    //Esercizio 07 ///////////////
    int nb = -2147483648;
    //int nb = 2147483647;
    //int nb = 0;
    //int nb = 1000000000;
    //int nb = 12345;

    //Esercizio 08 ///////////////
    //int n = 1;
    //int n = 4;
    //int n = 9;


    printf("ex00-------------------------------------------------------\n\n");
    ft_putchar(c);
    printf("\n\n\n\n\nex01-------------------------------------------------------\n\n");
    ft_print_alphabet();
    printf("\n\n\n\n\nex02-------------------------------------------------------\n\n");
    ft_print_reverse_alphabet();
  printf("\n\n\n\n\nex03-------------------------------------------------------\n\n");
    ft_print_numbers();
  printf("\n\n\n\n\nex04-------------------------------------------------------\n\n");
    ft_is_negative(x);
  printf("\n\n\n\n\nex05-------------------------------------------------------\n\n");
    ft_print_comb();
  printf("\n\n\n\n\nex06-------------------------------------------------------\n\n");
    ft_print_comb2();
  printf("\n\n\n\n\nex07-------------------------------------------------------\n\n");
    ft_putnbr(nb);
  /*printf("\n\n\n\n\nex08-------------------------------------------------------\n\n");
    ft_print_combn(n);*/
}
