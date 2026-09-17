# Assignment2-NaySanHtut

**Build & Run:**
```bash
cd Assignment2-NaySanHtut/
ls -la
gcc -c statistics.c -o statistics.o
ar rcs libstatistics.a statistics.o
gcc -o main main.c output_array.c -L. -lstatistics -lm
./main
```
