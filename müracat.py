isim = input("Lüttfen ismizi giriniz : ")
cinsiyet = input("Lütfen cinsiyetinizi giriniz (E/K) : ")
boy = int(input("Lütfen boyunuzu cm cinsinden giriniz : "))
is_gecmisi = input("Lütfen daha once calistiginiz sirketleri yaziniz : ")
gelecek = input("Lürfen geleceginiz hakkindaki dusuncelerinizi yaziniz : ")

if cinsiyet == 'E' and boy>=170 and is_gecmisi and gelecek:
 print(input(f"Tebrikler {isim} bey mulakati gectiniz."))
 
elif cinsiyet == 'K' and boy>=160 and is_gecmisi and gelecek:
 print(input(f"Tebrikler {isim} hanim mulakati gectiniz."))

else:
 print("Malesef mülakati gecemediz.")