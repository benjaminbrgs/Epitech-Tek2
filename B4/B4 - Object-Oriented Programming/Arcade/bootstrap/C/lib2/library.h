#ifndef LIB2_LIBRARY_H
#define LIB2_LIBRARY_H

void __attribute__((constructor)) constructor_ft(void);
void __attribute__((destructor)) destructor_ft(void);
void entryPoint_ft(void);

#endif //LIB2_LIBRARY_H
