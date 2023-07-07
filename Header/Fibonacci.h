int fib(int x, int a, int b) {
    if(x < 0)
        return 0;
    printf("%d ", b);
    return fib(x-1, b, b+a);
}   