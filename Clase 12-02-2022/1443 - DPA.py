while True:
    try:
        n = int(input())
        cont = 0
        for i in range(1, n, 1):
            if n % i == 0:
                cont += i
        if cont < n:
            print("Deficiente")
        elif cont == n:
            print("Perfecto")
        else:
            print("Abundante")
    except EOFError:
        break
