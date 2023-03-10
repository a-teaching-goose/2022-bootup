int fib_space_efficient(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int v1 = 0;
    int v2 = 1;

    // debug this i<n
    // use break point
    for (int i = 2; i <= n; ++i) {
        int v3 = v1 + v2;
        v1 = v2;
        v2 = v3;
    }

    return v2;
}