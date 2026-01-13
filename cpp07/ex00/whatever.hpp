template <typename Type>
void swap(Type & a, Type &b)
{
    Type tmp = a;
    a = b;
    b = tmp;
}

template <typename Type>
Type min(Type a, Type b)
{
    if (a < b)
        return a;
    else
        return b;
}


template <typename Type>
Type max(Type a, Type b)
{
    if (a < b)
        return b;
    else
        return a;
}