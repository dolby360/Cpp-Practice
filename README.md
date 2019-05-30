In this repository, I'll solve some challenges with c++
Every challenge will have it's own hpp file

The scale of difficulty is from the higher numbers to the lower.
Such that the easiest is 7.
And the toughest is 1.

In every level folder (e.g. Level_6 / Level_7) you will see the challenges described in the readme file.
Please check it out. 


## Cmake on Windows:
```bash
cd build
cmake -G "Unix Makefiles" ..
make
CppPractice
```
## Another option:
```bash
g++ test-main.cpp -c
g++ test.cpp -c
g++ test-main.o test.o -o tests && ./tests -r compact
```