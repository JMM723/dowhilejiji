
# Esta funcion revisa si el sensor todavia necesita calibrarse
def faltaCalibrar(lectura):
    return lectura != 10

lectura = 0  # El sensor comienza con una lectura de zero

# El ciclo permite mostrar el menu 1 vez
while True:

    print("\n CALIBRACION DEL SENSOR")
    print("Ultima lectura:", lectura)

    print("\n1. Ingresar una nueva lectura")
    print("2. Ver ultima lectura")
    print("3. Cancelar calibracion")

    opcion = int(input("Elige una opcion: "))

    if opcion == 1:

        lectura = int(input("Ingresa la nueva lectura: "))
        # Guardamos el nuevo valor d sensor

    elif opcion == 2:

        print("La ultima lectura es:", lectura)
        continue  # Regresa al inicio del ciclo

    elif opcion == 3:

        print("Calibracion cancelada")
        break  # Sale del ciclo

    else:

        print("Opcion no valida")

    # Comprobamos si el sensor ya llego a 10
    if not faltaCalibrar(lectura):
        break

# Si la lectura llega a 10 significa que ya se calibro, ya vendio jejej
if lectura == 10:
    print("Sensor calibrado.")
