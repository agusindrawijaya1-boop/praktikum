# Program Konversi Suhu

# Input suhu dari pengguna
suhu = float(input("Masukkan suhu: "))

# Pilih jenis konversi
print("Pilih konversi:")
print("1. Celsius ke Fahrenheit")
print("2. Fahrenheit ke Celsius")
print("3. Celsius ke Kelvin")
print("4. Kelvin ke Celsius")

pilihan = input("Masukkan pilihan (1/2/3/4): ")

# Proses konversi
if pilihan == "1":
    hasil = (suhu * 9/5) + 32
    print(f"Hasil: {hasil:.2f} °F")

elif pilihan == "2":
    hasil = (suhu - 32) * 5/9
    print(f"Hasil: {hasil:.2f} °C")

elif pilihan == "3":
    hasil = suhu + 273.15
    print(f"Hasil: {hasil:.2f} K")

elif pilihan == "4":
    hasil = suhu - 273.15
    print(f"Hasil: {hasil:.2f} °C")

else:
    print("Pilihan tidak valid!")