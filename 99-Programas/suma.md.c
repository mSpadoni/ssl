|Numero de Linea |Lexema                                      |Token                 |  
|:--------------:|-------------------------------------------:|:--------------------:|
|6               |int                                         |palabra reservada     |
|6               |esNumero                                    |identificador         |
|6               |(                                           |caracter de puntuacion|
|6               |const                                       |palabra reservada     |
|6               |char                                        |palabra reservada     |
|6               |*                                           |operador              |
|6               |nro                                         |identificador         |
|6               |)                                           |caracter de puntuacion|
|6               |{                                           |caracter de puntuacion|
|7               |int                                         |palabra reservado     |
|7               |tamanio                                     |identificador         |
|7               |=                                           |operador              |
|7               |strlen                                      |identificador         |
|7               |(                                           |caracter de puntuacion|
|7               |nro                                         |identificador         |
|7               |)                                           |caracter de puntuacion|
|7               |;                                           |caracter de puntuacion|
|8               |char                                        |palabra reservada     |
|8               |caracter                                    |identificador         |
|8               |;                                           |caracter de puntuacion|
|9               |for                                         |palabra reservada     |
|9               |(                                           |caracter de puntuacion|
|9               |int                                         |palabra reservada     |
|9               |i                                           |identificador         |
|9               |=                                           |operador              |
|9               |0                                           |constante             |
|9               |;                                           |caracter de puntuacion|
|9               |i                                           |identificador         |
|9               |<                                           |operador              |
|9               |tamanio                                     |identificador         |
|9               |;                                           |caracter de puntuacion|
|9               |i                                           |identificador         |
|9               |++                                          |operador              |
|9               |)                                           |caracter de puntuacion|
|10              |{                                           |caracter de puntuacion|
|11              |caracter                                    |identificador         |
|11              |=                                           |operador              |
|11              |nro                                         |identificador         |
|11              |[                                           |caracter de puntuacion|
|11              |i                                           |identificador         |
|11              |]                                           |caracter de puntuacion|
|11              |;                                           |caracter de puntuacion|
|12              |if                                          |palabra reservada     |
|12              |(                                           |caracter de puntuacion|
|12              |isdigit                                     |identificador         |
|12              |(                                           |caracter de puntuacion|
|12              |caracter                                    |identificador         |
|12              |)                                           |caracter de puntuacion|
|12              |==                                          |operador              |
|12              |0                                           |constante             | 
|12              |)                                           |caracter de puntuacion|
|13              |{                                           |caracter de puntuacion|
|14              |return                                      |palabra reservada     |
|14              |0                                           |constante             |
|14              |;                                           |caracter de puntuacion|
|15              |}                                           |caracter de puntuacion|
|16              |}                                           |caracter de puntuacion|
|17              |return                                      |palabra reservada     |
|17              |1                                           |constante             |
|17              |;                                           |caracter de puntuacion|
|18              |}                                           |caracter de puntuacion|
|20              |int                                         |palabra reservada     |
|20              |main                                        |palabra reservada     |
|20              |(                                           |caracter de puntuacion|
|20              |int                                         |palabra reservada     |
|20              |argc                                        |identificador         |
|20              |,                                           |caracter de puntuacion|
|20              |char                                        |palabra reservada     |
|20              |**                                          |operador              |
|20              |argv                                        |identificador         |
|20              |)                                           |caracter de puntuacion|
|20              |{                                           |caracter de puntuacion|
|21              |if                                          |palabra reservada     |
|21              |(                                           |caracter de puntuacion|
|21              |argc                                        |identificador         |
|21              |!=                                          |operador              |
|21              |3                                           |constante             |
|21              |)                                           |caracter de puntuacion|
|21              |{                                           |caracter de puntuacion|
|22              |puts                                        |identificador         |
|22              |(                                           |caracter de puntuacion|
|22              |"uso: suma nro1 nro2"                       |literalCadena         |
|22              |)                                           |caracter de puntuacion|
|22              |;                                           |caracter de puntuacion|
|23              |exit                                        |identificador         |
|23              |(                                           |caracter de puntuacion|
|23              |0                                           |constante             |
|23              |)                                           |caracter de puntuacion|
|23              |;                                           |caracter de puntuacion|
|24              |}                                           |caracter de puntuacion|
|26              |if                                          |palabra reservada     |
|26              |(                                           |caracter de puntuacion|
|26              |esNumero                                    |identificador         |
|26              |(                                           |caracter de puntuacion|
|26              |argv                                        |identificador         |
|26              |[                                           |caracter de puntuacion|
|26              |1                                           |constante             |
|26              |]                                           |caracter de puntuacion|
|26              |)                                           |caracter de puntuacion|
|26              |==                                          |operador              |
|26              |0                                           |constante             |
|26              |||                                          |operador              |
|26              |esNumero                                    |identificador         |
|26              |(                                           |caracter de puntuacion|
|26              |argv                                        |identificador         |
|26              |[                                           |caracter de puntuacion|
|26              |2                                           |constante             |
|26              |]                                           |caracter de puntuacion|
|26              |)                                           |caracter de puntuacion|
|26              |==                                          |operador              |
|26              |0                                           |constante             |
|26              |)                                           |caracter de puntuacion|
|26              |{                                           |caracter de puntuacion|
|27              |puts                                        |identificador         |
|27              |(                                           |caracter de puntuacion|
|27              |"nro1 y nro2 deben ser constantes numericas"|literalCadena         |
|27              |)                                           |caracter de puntuacion|
|27              |;                                           |caracter de puntuacion|
|28              |exit                                        |identificador         |
|28              |(                                           |caracter de puntuacion|
|28              |-1                                          |constante             |
|28              |)                                           |caracter de puntuacion|
|28              |;                                           |caracter de puntuacion|
|29              |}                                           |caracter de puntuacion|
|30              |int                                         |palabra reservada     |
|30              |sum1                                        |identificador         |
|30              |=                                           |operador              |
|30              |atoi                                        |identificador         |
|30              |(                                           |caracter de puntuacion|
|30              |argv                                        |identificador         |
|30              |[                                           |caracter de puntuacion|
|30              |1                                           |constante             |
|30              |]                                           |caracter de puntuacion|
|30              |)                                           |caracter de puntuacion|
|30              |;                                           |caracter de puntuacion|
|31              |int                                         |palabra reservada     |
|31              |sum2                                        |identificador         |
|31              |=                                           |operador              |
|31              |atoi                                        |identificador         |
|31              |(                                           |caracter de puntuacion|
|31              |argv                                        |identificador         |
|31              |[                                           |caracter de puntuacion|
|31              |2                                           |constante             |
|31              |]                                           |caracter de puntuacion|
|31              |)                                           |caracter de puntuacion|
|31              |;                                           |caracter de puntuacion|
|32              |printf                                      |identificador         |
|32              |(                                           |caracter de puntuacion|
|32              |"la suma de %d y %d es %d"                  |literalCadena         |
|32              |,                                           |caracter de puntuacion|
|32              |sum1                                        |identificador         |
|32              |,                                           |caracter de puntuacion|
|32              |sum2                                        |identificador         |
|32              |,                                           |caracter de puntuacion|
|32              |sum1                                        |identificador         |
|32              |+                                           |operador              |
|32              |sum2                                        |identificador         |
|32              |)                                           |caracter de puntuacion|
|32              |;                                           |caracter de puntuacion|
|33              |return                                      |palabra reservada     |
|33              |0                                           |constante             |
|33              |;                                           |caracter de puntuacion|
|34              |}                                           |caracter de puntuacion|
