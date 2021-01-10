#include <stdio.h>

int promptStudents();
int promptSubjects();

int main()
{
  int students = promptStudents();
  int subjects = promptSubjects();
  for (int i = 1; i <= students; i++)
  {
    int total = 0;
    for (int j = 1; j <= subjects; j++)
    {
      int grade;
      printf("¿Cuál fue la calificación de la prueba %i del estudiante %i?: ", j, i);
      scanf("%i", &grade);
      total += grade;
    }
    printf("El estudiante %i tiene un promedio de: %d\n\n", i, (total / subjects));
  }
  return 0;
}

int promptStudents()
{
  int n;
  printf("Escriba el número de estudiantes: ");
  scanf("%i", &n);

  return n;
}

int promptSubjects()
{
  int n;
  printf("¿Cuántas pruebas hace un estudiante? ");
  scanf("%i", &n);

  return n;
}