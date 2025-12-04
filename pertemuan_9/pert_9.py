#if-else
umur = int (input ('Berapa umur kamu : '))
if umur >= 17 :
    print('Cie punya KTP')
else :
    print ('masih bocil')

#looping
def buat_segitiga_bintang (ukuran) :
    for i in range (1, ukuran + 1):
        for j in range (i) : 
            print ('*', end='')
        print()

ukuran_segitiga = int (input ('Masukkan ukuran segitiga : '))
buat_segitiga_bintang(ukuran_segitiga)

#menulis ke file
file = open ('example.txt', 'w') # w = write
file.write ('Hello World \n')
file.write ('Python makes file handling easy. \n')
file.close

#membaca file
file = open ('example.txt', 'r') # r = read
content = file.read()
file.close()
print ('File Content : \n', content)

#menambah write ke file yg sudah ditulis
file = open ('example.txt', 'a') # a = append
file.write ('Hari ini hujan. \n')
file.close
