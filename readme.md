```bash
gcc -Wall -o transformer 0.transformer.c
echo "hello world" | ./transformer > encrypted
cat encrypted | ./transformer > decrypted
```

```bash
gcc -Wall -o file_encryption 2.file_encryption.c
./file_encryption input.txt output.txt
./file_encryption output.txt decrypted.txt
```

```bash
wget https://www.nayuki.io/res/tiny-png-output/TinyPngOut.h
wget https://www.nayuki.io/res/tiny-png-output/TinyPngOut.c
gcc -Wall -o image-gen image-gen.c TinyPngOut.c
./image-gen
```

```bash
gcc -Wall graphics.c -o graphics -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```

```bash
time ./slow
time ./fast
diff slow.c fast.c
gcc -S slow.c && gcc -S fast.c
diff slow.s fast.s
```