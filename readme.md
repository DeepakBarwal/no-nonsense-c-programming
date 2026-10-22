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
