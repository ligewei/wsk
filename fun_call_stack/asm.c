int g(int x)
{
    return x+5;
}

int f(int x)
{
    return g(x);
}

int main(void)
{
    return f(10)+1;
}