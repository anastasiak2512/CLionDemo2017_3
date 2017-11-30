//
// Support for Microsoft Visual C++ extensions
// Don't forget to enable MSVC in Registry
//

#ifdef _WIN32
void test_ptr()
{
    void *        __ptr32 p32d; //default signed pointer
    void * __sptr __ptr32 p32s; //explicit signed pointer
    void * __uptr __ptr32 p32u; //explicit unsigned pointer

    p32d = reinterpret_cast<void *>(0x87654321);
    p32s = p32d;
    p32u = p32d;
}

struct Animation
{
    float dst;
    explicit Animation(float dstPtr) : dst(dstPtr) {}
    __forceinline void operator () (float cf) { dst += cf; }
};
#endif
