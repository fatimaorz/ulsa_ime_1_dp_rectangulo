# Receta: Área y perímetro de un rectángulo

<!-- Escribe aquí tu receta completa en pseudocódigo, ANTES de programar.
     El primer paso es solo un ejemplo del formato; el resto de la receta es completamente tuyo.
     Si la corriges después de probarla a mano, deja aquí la versión final. -->

``` text
1. MOSTRAR "Bienvenido a mi programa de rectangulo"
2. REPETIR
     ancho ← leerDecimal("Ancho en cm (mayor que 0): ")
   HASTA QUE ancho > 0
3. REPETIR
     alto ← leerDecimal("Alto en cm (mayor que 0): ")
   HASTA QUE alto > 0
4. area ← ancho * alto
5. perimetro ← 2 * (ancho + alto)
6. MOSTRAR "Area: " area " cm2"
7. MOSTRAR "Perimetro: " perimetro " cm"
8. FIN