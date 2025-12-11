import random

# 1. Undian Pemenang
pelanggan = ['Budi', 'Siti', 'Andi', 'Dewi']
pemenang = random.choice(pelanggan)
print(f"Pemenang Giveaway: {pemenang}")

# 2. Diskon Acak (Mystery Box)
diskon = random.randint(10, 50) # Angka acak 10 - 50
print(f"Selamat! Anda dapat diskon {diskon}%")

