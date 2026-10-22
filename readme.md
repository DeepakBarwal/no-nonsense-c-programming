```bash
gcc -Wall -o transformer 0.transformer.c
echo "hello world" | ./transformer > encrypted
cat encrypted | ./transformer > decrypted
```