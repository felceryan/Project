// int i = -1, &r = 0;
// Invalid (i is legal), it must be const &r = 0; for it to be legal because it would look like this
// int temp = 0;
// int &r = temp;
// And since its temporary object its illegal to edit.
// int *const p2 = &i2;
// Valid
// const int i = -1, &r = 0;
// Invalid same reason as the first entry. (i is legal)
// const int *const p3 = &i2;
// Valid
// const int *p1 = &i2;
// Valid
// const int &const r2;
// Invalid, references must always be initiliased at declaration
// and even if it was initiliased you cant do &const r2 as it is not an object.
// const int i2 = i, &r = i;
// valid
//1

// int i, *const cp;
// Illegal, all constants must be init' at declaration. (i legal)
// int *p1, *const p2;
// Illegal, all constants must be init' at declaration. (*p1 legal)
// const int ic, &r = ic;
// Illegal, all constants must be init' at declaration, &r must refer to a legal object.
// const int *const p3;
// Illegal, all constants must be init' at declaration.
// const int *p;
// Legal
//2

// i = ic;
// Legal
// p1 = p3;
// Illegal, pointers must be assigned addresses of objects not objects.
// p1 = &ic;
// Illegal, to point to a const you must define it as 'const int * p1 = &ic;'
// p3 = &ic;
// Legal
// p2 = p1;
// Legal, unless p1 was a const, then it would need to be a const int *const p2 = p1;
// ic = *p3;
// Illegal, const objects can't be modified outside its definition.
//3
