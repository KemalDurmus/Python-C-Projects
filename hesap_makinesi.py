def hesap_makinesi(islem):
    if islem == 1:
        sayi1 = int(input("Lutfen 1. sayiyi giriniz : "))
        sayi2 = int(input("Lutfen 2. sayiyi giriniz : "))
        toplam = sayi1 + sayi2
        print(f"{sayi1} + {sayi2} = {toplam}")

    elif islem == 2:
        sayi1 = int(input("Lutfen 1. sayiyi giriniz : "))
        sayi2 = int(input("Lutfen 2. sayiyi giriniz : "))
        fark = sayi1 - sayi2
        print(f"{sayi1} - {sayi2} = {fark}")

    elif islem == 3:
        sayi1 = int(input("Lutfen 1. sayiyi giriniz : "))
        sayi2 = int(input("Lutfen 2. sayiyi giriniz : "))
        carpma = sayi1 * sayi2
        print(f"{sayi1} * {sayi2} = {carpma}")

    elif islem == 4:
        sayi1 = int(input("Lutfen 1. sayiyi giriniz : "))
        sayi2 = int(input("Lutfen 2. sayiyi giriniz : "))
        bolme = sayi1 / sayi2
        print(f"{sayi1} / {sayi2} = {bolme}")

print("Lütfen yapmak istediğiniz işlemi seçin:")
print("1 - Toplama")
print("2 - Çikarma")
print("3 - Çarpma")
print("4 - Bölme")



secenek = int(input("Lutfen yapacaginiz islemi seciniz : "))
hesap_makinesi(secenek)

