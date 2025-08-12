int romanToInt(char* s) {
    static const int map[256] = {
        ['I'] = 1, ['V'] = 5, ['X'] = 10, ['L'] = 50,
        ['C'] = 100, ['D'] = 500, ['M'] = 1000
    };

    int total = 0;
    const char* p = s;

    while (*p) {
        int curr = map[(unsigned char)*p];
        int next = map[(unsigned char)*(p + 1)];
        // Add if curr >= next, else subtract
        total += (curr >= next ? curr : -curr);
        p++;
    }
    return total;
}
