import math

harga_pokok = 45200.50
# Strategi harga: Selalu bulatkan ke atas
harga_jual = math.ceil(harga_pokok) 

print(harga_jual) # Output: 45201
