int countSetBits(int x) {
    int count = 0;
    int mask = 1;
    for (int i = 0; i < 31; ++i) {
        if (x & mask) count++;
        mask <<= 1;
    }
    return count;
}
