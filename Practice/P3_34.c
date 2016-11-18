// sum of bits
int rfun(unsigned x)
{
    if (x == 0)
        return ;
    unsigned nx = x >> 1;
    int rv = rfun(nx);
    return (x & 0x1) + rv;
}
