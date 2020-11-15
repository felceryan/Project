// The difference between an int, long, long long and short is:
// int = Minimum 16 bits maximum = 32 bits
// long = minimum 32 bits
// long long = minimum 64 bits
// short = minimum and maximum 16 bits
// An unsigned type means that the value cannot be below 0
// for example unsigned short minimum value becomes 0 and maximum 65536 (2^16)
// whereas a signed can be negative or positive for example minimum value for signed short -32768 and maximum 32768
// The difference between a float and a double is that float is a single precision floating point which has a minimum of 6 significant digits
// Whereas a double is a double precision float point which has a minimum of 10 significant digits.
//1

// To calculate a mortgage i would use:
// Rate = unsigned float
// Principal = unsigned float
// Payment = unsigned float
// i selected unsigned float because for one none of these values will be negative and i picked float because interest, payment or principal may not be a whole number
// which would require a float but not a double float as really we only need 2 significant figures and float supports 6.
//2