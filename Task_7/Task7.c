//Написати програму, яка знаходить мінімальний та максимальний елементи двовимірного масиву.
#include <stdio.h>

int main() {
   int rows, columns;
   printf("Vvedit kilkist ryadkiv ta stovptsiv:\n");
   scanf("%d %d", &rows, &columns);
   
   int arr[rows][columns];
   printf("Vvedit elementy masyvu:\n");
   
   // Заповнюємо масив та знаходимо мінімальний та максимальний елементи
   int min = arr[0][0], max = arr[0][0];
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
         scanf("%d", &arr[i][j]);
         if (arr[i][j] < min) {
            min = arr[i][j];
         }
         if (arr[i][j] > max) {
            max = arr[i][j];
         }
      }
   }
   
   printf("Minimalnyy element: %d\n", min);
   printf("Maksymalnyy element: %d\n", max);
   
   return 0;
}