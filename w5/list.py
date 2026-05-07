# Program Menyimpan Data ke Dalam List

# Membuat list kosong
data = []

# Input jumlah data
jumlah = int(input("Masukkan jumlah data: "))

# Menyimpan data ke list
for i in range(jumlah):
    nilai = input(f"Masukkan data ke-{i+1}: ")
    data.append(nilai)

# Menampilkan isi list
print("\nData dalam list:")
print(data)