
## 2.1. Information Storage
- Every byte of memory is identified by a unique number, known as it's address.
- Set of all possible addresses is known as virtual address space
- The actually implementation use a combination of DRAM, flash memory, disk storage, special hardware...
- The value of a pointer in C is the virtual address of the first byte of some block storage (type-agnostic)
- The actually machine-level program has no info about data types
- There is a lot of standards for C, we focus on the latest (ISO C11)
- `gcc -std=c11 prog.c`
- Every computer has a word size (32 bits, 64 bits, ...)
- For a machine with a w-bit word size, the virtual addresses can rangeb from 0->2^w-1, giving the program at most 2^w bytes
- We should use data types where data sizes are fixed int32_t, int64_t
- Pointer uses the full word size of the program
- There are two byte-ordering in CS: little and big endian
- 
