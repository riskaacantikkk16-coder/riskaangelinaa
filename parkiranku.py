print("===== PARKIRKU =====")

tarif = int(input("Masukkan tarif parkir per jam : Rp"))
lama = int(input("Masukkan lama parkir (menit) : "))

# Pembagian
jam = lama // 60 

# Modulus
sisa = lama % 60

# Jika ada sisa menit, dianggap 1 jam
jam = jam + (sisa > 0)

# Perkalian
biaya = tarif * jam

# Penjumlahan
biaya = biaya + 1000

print("\n===== HASIL PARKIR =====")
print("Lama parkir :", lama, "menit")
print("Jumlah jam  :", jam, "jam")
print("Total biaya : Rp", biaya)

pembayaran = int(input("\nMasukkan uang pembayaran : Rp"))

# Pengurangan
kembalian = pembayaran - biaya

print("Kembalian :", kembalian)