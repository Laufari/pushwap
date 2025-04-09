Push_swap - Algoritmo de Ordenamiento con Instrucciones Limitadas
Descripción: Push_swap es un proyecto que consiste en desarrollar un programa en C que ordene una lista de números enteros
utilizando dos stacks y un conjunto limitado de instrucciones.
El objetivo es ordenar los números de manera eficiente con el menor número de operaciones posibles,
y se requiere generar la secuencia de instrucciones más corta para lograr el orden ascendente.

El programa debe recibir un conjunto de números enteros como argumento, 
ordenar el stack a de menor a mayor y mostrar las instrucciones necesarias para lograrlo.
Las instrucciones disponibles son limitadas, y el reto consiste en utilizarlas de manera eficiente.

📂 Estructura

push_swap/
├── push_swap.c           # Implementación principal
├── stack_utils.c         # Funciones auxiliares para manipular los stacks
├── push_swap.h           # Definiciones y prototipos
├── Makefile              # Para compilar el proyecto
└── README.md             # Documentación
🛠️ Instalación
Compilar:

make
Limpiar archivos:

make clean
make fclean
Ejecutar el programa:

./push_swap 2 1 3 6 5 8
🎯 Objetivos
Ordenar una lista de enteros de forma eficiente usando las operaciones mencionadas.
Minimizar el número de instrucciones utilizadas para ordenar el stack a.
El programa debe manejar errores de entrada y mostrar un mensaje de error adecuado si los argumentos no son correctos.
📝 Reglas
Las variables globales están prohibidas.
No debe haber errores de memoria ni condiciones indefinidas.
El programa debe mostrar la secuencia de instrucciones más corta para ordenar los números.
En caso de error, se debe imprimir Error en la salida de errores estándar.
El proyecto debe ser entregado con un Makefile funcional que cumpla con los requisitos especificados.
🎁 Bonus
Se pueden agregar optimizaciones y mejoras adicionales para lograr un rendimiento superior.
