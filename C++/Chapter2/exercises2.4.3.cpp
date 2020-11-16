// const int v2 = 0;
// Low level const.

// int *p1 = &v1, &r = v1;
// No const level. (&r is technically int &const &r = v1)

// const int *p2 = &v2, *const p3 = &i, &r2 = v2;
// p2 is a low level const, p3 is a high level const, r2 is not a const.
// (&r2 is technically const int &const r2 = v2)
//1

// r1 = v2;
// Valid, it will assign the value of const v2 to non const r1.
// r1 = 0

// p1 = p2; p2 = p1;
// p1 is invalid, p2 is valid.
// p1 is pointing to int whereas p2 is pointing to a const int
// You can convert plain int to const but not const int to plain int

// p1 = p3; p2 = p3;
// Valid
// p1 is a pointer to int being assigned the value of p3 (a const int pointer) which is the address of &i.
// p1 = &i
// p2 is a pointer to const int and p3 is a pointer to const int aswell that just so happens to be a const pointer.
// p2 = &i;
//2