int nthTermOfAP(int A1, int A2, int N) {
    int d = A2 - A1;
    int ap = A1 + (N-1) * d;
    return ap;
}
