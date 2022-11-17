for x in range(3):
    baris, kolom = map(int, input().split())
    angka = []
    x = 0
    isi = list(map(int, input().split()))
    print ()
    for i in range(baris):
        angka.append(isi[x : x + kolom])
        x += kolom
    for baris in angka:
        for isi in baris:
            print(isi, end=' ')
        print()
    print()