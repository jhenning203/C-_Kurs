#include <iostream>

int main()
{
    bool bool1 = true; //1 Bit (theor.) Speicherplatz, in der Realität aber 1 Byte

    char char1 = 10; // 1 Byte ("voll belegt") Speicherplatz entspricht 2^8 = 256

    short short1 = 30000; // 2 Byte = 16 Bit (2^16 = 65.536)

    int int1 = 100'000; // 4 Byte = 32 Bit (2^32 ~ 4,295 Mrd)

    long long ll = 5'000'000'000; // 8 Byte = 64 Bit (2^64)

    float float1 = 10.0; // 4 Byte

    double double1 = 100.0; // 8 Byte

    return 0;
}
