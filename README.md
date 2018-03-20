# Taller de iniciación a Arduino


![OSL](./images/Logo_OSL_400.png)

![Biblioteca](./images/Lobo_Biblioteca_400.png)

![URL Biblioteca](./images/Url_biblioteca.png)

#### José Antonio Vacas @javacasm

![Licencia CC](./images/Licencia_CC.png)

!


# ¿Qué es arduino?


![Arduino UNO](./images/Arduino_Uno_-_R3.jpg)

!

# ¿Qué es arduino?

![Arduino UNO](./images/Arduino_Uno_-_R3.jpg)

## + Entorno de programación

!

# ¿Qué es arduino?

![Arduino UNO](./images/Arduino_Uno_-_R3.jpg)

## + Entorno de programación

## + Librerías (conjunto de código)

!

# ¿Qué es arduino?

![Arduino UNO](./images/Arduino_Uno_-_R3.jpg)

### + Entorno de programación

### + Librerías (conjunto de código)

### + Enorme documentación y ejemplos

!

## Todo totalmente OpenSource

![OpenHardware](./images/ohw-logo-svg.png)

![Open Hardware 2](./images/open_hardware_logo.png)

https://github.com/javacasm/ProgramarParaEducar/blob/master/OpenSource.md


!

## ¿y si no tengo arduino?

Simuladores

https://github.com/javacasm/ArduinoBasico/blob/master/1.5%20Y%20si%20no%20tengo:%20Emuladores%20y%20simuladores.html.md

!

# Dónde comprar

### En España

* [Inven.es](http://inven.es)
* [Electan.com](http://www.electan.com/)
* [Bricogeek.com](http://www.bricogeek.com/shop/)
* [Cooking Hack](http://www.cooking-hacks.com/)


### Fuera de España

* [Arduino](http://store.arduino.cc/eu/index.php)
* [Sparkfun](http://www.sparkfun.com/)
* [Adafruit](http://adafruit.com/)

!

# Qué comprar
-----------

 Un buen kit básico ha de tener al menos:

-   resistencias variadas,
-   led de diferentes colores,
-   ldr (células fotoeléctricas),
-   sensores de temperatura: DHT11, TMP36
-   transistores,
-   un par de servos 9g,
-   algún motor pequeño
-   una breadboard,
-   cables de colores con conectores machos y hembras
-   arduino Uno

!

# Software:

IDE

(instalación de driver en Windows)

!

# Primera prueba

Ejemplo Blink

!

# Ahora con un led externo y en la patilla 9

# Siempre con su resistencia!!!

!
# Programamos C++

## pero todo está preparado para que sea sencillo

!

# Ejercicio: Kit

## Conectamos 5 leds (con sus 5 resistencias)

!


# Ahora aprendemos a hacer que no todo sea digital

    analogWrite

(Es un truco llamado PWM)

0 ----- 100 %
0 ----- 255
Rango de salida

!

# Vamos a leer voltajes

analogRead

Rangos de lectura
0 ------ 5V
0 ------ 1023


!

# Muchos  sensores se leen igual

## Sólo necesitaremos saber convertir el voltaje en la magnitud física

### Ejemplo TMP36 o LM35

!

## Ejercicio controlar brillo del led con el potenciometro

Pista: Funcion Map

!

# Ejercicio: indicador de temperatura

!

# Librerías

Ejemplo Servo

Ejemplo pantalla LCD

Ejemplo Sensor DHT
