#4. Bankamatik

bakiye = 1000



def bakiye_sorgula():
    print(f"Toplma bakiyeniz : {bakiye}")




def para_yatir(miktar):
    global bakiye
    bakiye += miktar
    print(f"{miktar} Degerinde para hesabinaza yatilmistir. Güncel bakiye : {bakiye}")



def para_cekme(miktar):
    global bakiye
    if miktar > bakiye:
        print("Yetersiz bakiye. Bakiyeniz : {}" .format(bakiye))


    else:
        bakiye -= miktar
        print(f"{miktar} Tutarinda para cekme isleminiz basariyla tamamlanmistir. Guncel bakiyeniz : {bakiye} ")
while True:
    print("1. - Bakiye sorgulama")
    print("2. - Para yatirma")
    print("3. - Para cekme")
    print("4. - Cikis")



    secim = int(input("Lutfen yapmak istediğiniz islemi seciniz : "))
    if secim == 1:
        bakiye_sorgula()

    elif secim == 2:
        miktar = float(input("Lutfen yatirmak istediginiz para miktarini giriniz : "))
        para_yatir(miktar)

    elif secim == 3:
        miktar = float(input("Lutfen cekmek isteginiz para miktarini giriniz : "))
        para_cekme(miktar)

    elif secim == 4:
        print("Cikis yapiliyor... Bizi tercihettiginiz icin tesekkur ederiz...")
        break

    else:
        print("Gecersiz bir deger girdiniz. Lutfen 1,2,3,4 degerlerinden birini giriniz...")