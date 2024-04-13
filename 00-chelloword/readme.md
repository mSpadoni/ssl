Trabajo Practico #0: Compilar en c

Para comenzar este trabajo tuve que descargar un compilador y para ello me instale mingw64 (que tenía el compilador gcc), luego de esto comencé a escribir mi código en hello.c. 










Despues de eso tuve que compilar y para ello lo primero que hice fue escribir en la consola cd ‘00-chelloword\output’ para poder ingresar a la carpeta donde estaba el programa a compilar, seguido de eso lo que hice fue escribir en la consola              &.\'hello.exe' -std=c11, en dónde .\'hello.exe' es el programa que debo compilar y       std=c11 le indica a mi compilador con que norma debe de compilar (en mi visual studio code tengo una extensión que me permite compilar de una forma más sencilla, pero no me permite elegir utilizar –std y por ende no lo utilice).



 
Y finalmente lo único que me faltaba era re direccionar la salida del programa, para ello cree output.txt y escribi en la consola &.\'hello.exe' -std=c11 > output.txt
 
lo que me permitió escribir la salida de mi programa en output.txt:

