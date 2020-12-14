#include <stdio.h>

int main()
{
  ClrScr();
  gotoxy(10, 10)
  printf(Estoy en la fila 10 columna 10);
  return 0;
}

/*
Errores:

L2: Falta incluir conio.h
L5: Case sensitive: ClrScr -> clrscr
L6: Falta ; al final de la línea. gotoxy no esta definida debido a L2
L7: printf solo acepta strings como argumentos
*/