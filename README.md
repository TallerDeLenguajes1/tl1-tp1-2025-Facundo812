# tp1
## .gitignore
es un archivo que sirve para indicarle a **git** que archivos o carpetas debe ignorar en un proyecto
### ¿Por qué es conveniente incluirlo?
es conveniente incluirlo para tener una mejor organizacion del proyecto, facilitando el seguimiento de los archivos importantes
### ¿Cuándo se debe hacer?
se debe hacer al inicio del proyecto, pues si el archivo que se desea ignorar fue incluido antes que el **.gitignore**, **git** seguira mostrando dicho archivo 
### ¿Cómo configuraría el archivo .gitignore?
en este caso se desea ignorar el archivo **ignorado.txt** por lo tanto dentro del **.gitignore** simplemente se escribe el nombre de este archivo para que funcione

## Punto 3: Ejercicio de Debugging
### codigo_misterio.c
Este codigo primero declara una variable llamada **dato_misterioso** de tipo int y de valor 452, es un numero entero por lo tanto renombraremos esta variable como **num**. Luego pasa esta variable por referencia a una funcion llamada **procesar_enigma** que llama a otras 3 funciones

- f_alpha: recibe un numero por referencia y mediante una iteracion separa sus digitos y los guarda en una variable de derecha a izquierda, dando como resultado el mismo numero ingresado pero invertido, para finalizar reescribe el numero original por el numero invertido. Por lo tanto lo que hace la funcion es invertir el numero ingresado, la renombraremos como **invertir_numero**, la variable **temp** la renombraremos como **auxiliar**, pues guarda el valor del numero ingresado para no modificarlo y se lo utiliza para obtener los digitos, y a **rev** como **invertido** pues guarda los digitos hasta llegar al numero invertido.

- f_beta: simplemente recibe un numero por referencia y lo divide en 2, sin mas variables de por medio. Renombraremos la funcion como **mitad_numero**.

- f_gamma: recibe un numero por referencia y mediante una iteracion va separando los digitos del numero y guarda la suma de estos en una variable, luego al numero original se le suma esta variable. Por lo tanto lo que hace la funcion es sumarle a un numero la suma de sus digitos, renombraremos a esta funcion como **sumar_digitos**, al igual que la funcion **invertir_numero** podemos llamar a la variable **temp** como **auxiliar**, pues su funcion es similar y es una variable local, luego **suma** puede conservar dicho nombre, pues describe correctamente su rol.

finalmente podemos llamar **procesar_enigma** como **procesar_numero** para ser mas preciso.
### codigo_sin_funcionar.c
#### lista de errores:
1. el debbuger muestra "implicit declaration of function 'printf'"
2. se esperaba ';' [linea 19]
3. se esperaba ';' [linea 25]
4. durante la ejecucion sale el mensaje "se produjo una excepcion" [linea 13]
5. la funcion "duplicar_numero" no retorna el valor correcto

#### soluciones para cada uno:
1. falta la biblioteca que tiene definida a la funcion **printf**, para solucionarlo hay que incluir dicha biblioteca al inicio del codigo, es decir, "#include <stdio.h>"
2. en la linea anterior [linea 18: int suma = valor1 + valor2] hay un error de sintaxis pues falta un punto y coma, entonces al final escribir ";" para solucionarlo
3. en la linea anterior [linea 24: return 0] hay un error de sintaxis pues falta un punto y coma, entonces al final escribir ";" para solucionarlo
4. en la linea 13 [scanf("%d", valor1);] falta un "&" en la funcion scanf, hay que añadirlo antes de "valor1" para solucionarlo
5. la funcion esta recibiendo por valor el numero ingresado cuando deberia ser por referencia, para solucionarlo, en la deficion de la funcion agregar operador de indireccion "*" en el parametro y en el cuerpo de la funcion, y luego en la llamada de la funcion agregar el operador de direccion "&"
## punto 4
- c) Revise los archivos subidos en su repositorio de github. ¿Qué archivos
vé?¿Cuál cree que no hace falta que esté?

respuesta: se ven los archivos cargados previamente (como README.md o archivo.txt) y ahora los .c y .exe, de estos 2 los que no hacen falta que esten son los .exe

- g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que
el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4?
¿Es igual a los anteriores? ¿Por qué?

respuesta: el resultado es el mismo porque el puntero es una variable que almacena como dato una direccion de memoria y en este caso le estamos dando la direccion de memoria de la variable creada. En el punto 4 se obtiene la direccion de memoria del puntero, que es una direccion diferente de las anteriores porque el puntero es como cualquier otra variable, necesita su propio espacio de memoria para almacenar su respectivo dato, en este caso una direccion