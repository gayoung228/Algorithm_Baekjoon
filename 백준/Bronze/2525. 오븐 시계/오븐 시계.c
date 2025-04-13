int main()
{
    int a, b, c, x, y;

    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    b += c;
    x = b / 60;
    y = b % 60;

    if (b % 60 == 0) {
        a += x;
        b = y;
    }
    else {
        a += x;
        b = y;
    }
    if (a > 23) {
        a = a % 24;
    }
    
    printf("%d %d\n", a, b);

    return 0;
}