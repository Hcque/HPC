

#define READ 0
#define WRITE 1


int main()
{
    TraceReader tr;
    Cache64 cache;

    int type;
    
    while (tr.read(type, addr))
    {
        if (type == READ) cache.read(addr);
        else cache.wirte(addr);

    }
}