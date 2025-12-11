def hitung_total_bayar(harga, pajak):
    total = harga + (harga * pajak)
    return total

# Cara Pakai
transaksi_1 = hitung_total_bayar(100000, 0.1)
print(f"Total Bayar: Rp {transaksi_1}")
