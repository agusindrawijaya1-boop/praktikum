# Program Menghitung Rata-rata

# Input jumlah data
jumlah = int(input("Masukkan jumlah data: "))

total = 0

# Input data angka
for i in range(jumlah):
    angka = float(input(f"Masukkan angka ke-{i+1}: "))
    total += angka

# Hitung rata-rata
rata_rata = total / jumlah

# Tampilkan hasil
print(f"Rata-rata = {rata_rata:.2f}")