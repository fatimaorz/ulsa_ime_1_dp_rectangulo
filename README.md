# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
Programa que le pida al usuario el ancho y el alto de un rectangulo para luego mostrar su area y perimetro. Si un numero ingresado es 0 volver a solicitarlo.


## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. Alto
2. Ancho

**Salidas:**
1. Area
2. Perimetro

**Fórmulas** (área y perímetro):
area= ancho * alto
perimetro= 2 x (ancho + alto)

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- El ancho debe ser un numero mayor que 0 (un rectangulo no puede medir 0 ni una cantidad negativa)
-  El alto debe ser un numero mayor que 0, por la misma razon.

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
Vuelve a pedir la medida, una y otra vez, hasta que el usuario escriba un valor mayor que 0. No hay limite de intentos. Lo hago asi porque un ancho o alto de 0 o negativo no tiene sentido fisico, y si lo dejara pasar el programa mostrara un area y un perimetro incorrectos sin avisar (por ejemplo, con -4 × 3 da de area -12).

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
`leerDecimal` revisa el formato: que lo escrito sea un numero. Rechaza cosas como `abc` o `12abc` y vuelve a pedir el dato. Pero `-3` y `0` si son numeros validos, asi que los deja pasar. Revisar el rango (que la medida sea mayor que 0) lo hace mi programa con la condicion del ciclo `do-while`.


**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
Al salir del ciclo, `ancho` es un numero valido (`leerDecimal` ya verifico el formato) y es mayor que 0 (mi ciclo ya verifico el rango). Como esta frase siempre se cumple al salir, puedo calcular el area y el perimetro sin volver a revisar el dato.

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | 5 | 3 | 15 | 16 |
| 2 (cuadrado) | 4 | 4 | 16 | 16 |
| 3 (con decimales) | 2.5 | 4 | 10 | 13 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí 
**¿Tuve que corregirla?** no
**¿Cuántas versiones de mi receta escribí hasta la final?** 1
## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
_____

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
_____

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | _____ | _____ |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | _____ | _____ |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | _____ | _____ |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | _____ | _____ |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | _____ | _____ |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | _____ | _____ |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ | _____ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
_____

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____

**¿Qué fue lo más difícil y cómo lo resolví?**
_____

**¿Qué pregunta me quedó sin responder?**
_____

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
_____

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom