
def faltaTemperatura(temperatura):
    return temperatura != 30  # Revisa si falta llegar a 30 grados

temperatura = 0  # La temperatura comienza en 0.0000g raditos

# El ciclo permite mostrar el menu al menos una vez
while True:

    print("\n--- CONTROL DE TEMPERATURA ---")
    print("Temperatura actual:", temperatura)

    print("\n1. Ingresar temperatura")
    print("2. Ver temperatura")
    print("3. Apagar sistema")

    opcion = int(input("Elige una opcion: "))

    if opcion == 1:

        temperatura = int(input("Ingresa la temperatura: "))
        # Guarda nueva temperatura

    elif opcion == 2:

        print("Temperatura actual:", temperatura, "grados")
        continue  # Regresa al inicio del menu

    elif opcion == 3:

        print("Sistema apagado")
        break  # Termina el ciclo

    else:

        print("Opcion no valida")

    # Revisa si ya se alcanzo la temperatura indicada
    if not faltaTemperatura(temperatura):
        break
 # Si la temperatura llega a 30 significa que ya se alcanzo la temperatura deseada
if temperatura == 30:
    print("Temperatura alcanzada.")
