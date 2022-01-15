
///* NEXTEER SWT */ - Nexteer added for uint8 defn
#include "Std_Types.h"


/* Root certificate extracted from RootCertificate.der. */
const uint8 rootCert[] = 
{
    0x30, 0x82, 0x03, 0x72, 0x30, 0x82, 0x02, 0x5a, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x02, 0x03,
    0xe9, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x04, 0x05, 0x00,
    0x30, 0x69, 0x31, 0x13, 0x30, 0x11, 0x06, 0x0a, 0x09, 0x92, 0x26, 0x89, 0x93, 0xf2, 0x2c, 0x64,
    0x01, 0x19, 0x16, 0x03, 0x63, 0x6f, 0x6d, 0x31, 0x18, 0x30, 0x16, 0x06, 0x0a, 0x09, 0x92, 0x26,
    0x89, 0x93, 0xf2, 0x2c, 0x64, 0x01, 0x19, 0x16, 0x08, 0x62, 0x6d, 0x77, 0x67, 0x72, 0x6f, 0x75,
    0x70, 0x31, 0x0c, 0x30, 0x0a, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x03, 0x70, 0x6b, 0x69, 0x31,
    0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x0b, 0x62, 0x6d, 0x77, 0x2d, 0x66, 0x7a,
    0x67, 0x2d, 0x70, 0x6b, 0x69, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x0b,
    0x66, 0x7a, 0x67, 0x2d, 0x72, 0x6f, 0x6f, 0x74, 0x2d, 0x63, 0x61, 0x30, 0x1e, 0x17, 0x0d, 0x30,
    0x32, 0x30, 0x39, 0x31, 0x39, 0x31, 0x33, 0x31, 0x30, 0x32, 0x34, 0x5a, 0x17, 0x0d, 0x32, 0x37,
    0x30, 0x39, 0x32, 0x30, 0x31, 0x33, 0x31, 0x30, 0x32, 0x34, 0x5a, 0x30, 0x69, 0x31, 0x13, 0x30,
    0x11, 0x06, 0x0a, 0x09, 0x92, 0x26, 0x89, 0x93, 0xf2, 0x2c, 0x64, 0x01, 0x19, 0x16, 0x03, 0x63,
    0x6f, 0x6d, 0x31, 0x18, 0x30, 0x16, 0x06, 0x0a, 0x09, 0x92, 0x26, 0x89, 0x93, 0xf2, 0x2c, 0x64,
    0x01, 0x19, 0x16, 0x08, 0x62, 0x6d, 0x77, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x31, 0x0c, 0x30, 0x0a,
    0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x03, 0x70, 0x6b, 0x69, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03,
    0x55, 0x04, 0x0b, 0x13, 0x0b, 0x62, 0x6d, 0x77, 0x2d, 0x66, 0x7a, 0x67, 0x2d, 0x70, 0x6b, 0x69,
    0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x0b, 0x66, 0x7a, 0x67, 0x2d, 0x72,
    0x6f, 0x6f, 0x74, 0x2d, 0x63, 0x61, 0x30, 0x82, 0x01, 0x20, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86,
    0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0d, 0x00, 0x30, 0x82,
    0x01, 0x08, 0x02, 0x82, 0x01, 0x01, 0x00, 0x94, 0xeb, 0x3f, 0x69, 0xa6, 0x90, 0x6c, 0x9d, 0xf9,
    0xc6, 0xf1, 0x71, 0x89, 0x98, 0x79, 0x12, 0x20, 0xfd, 0xd6, 0xd8, 0x7c, 0xd4, 0x83, 0x98, 0x62,
    0x7e, 0xa5, 0xbf, 0xee, 0xa2, 0xd1, 0x98, 0xc4, 0xef, 0x6c, 0xa2, 0xb7, 0x8f, 0xfe, 0x5c, 0x06,
    0x72, 0x84, 0x53, 0x78, 0xa8, 0x3c, 0x5e, 0xe8, 0xa8, 0x71, 0x00, 0x7e, 0x09, 0x18, 0xd2, 0x89,
    0x04, 0x7e, 0x36, 0x75, 0x8a, 0x2b, 0x34, 0xf5, 0x42, 0xcb, 0xcf, 0x8f, 0x82, 0x34, 0x15, 0x22,
    0x7e, 0x54, 0xa5, 0xd8, 0x69, 0x99, 0x83, 0x7b, 0x36, 0xf8, 0x87, 0xc3, 0xb9, 0x45, 0x0b, 0x9f,
    0xdd, 0x60, 0xe3, 0xad, 0x48, 0x60, 0xb8, 0xeb, 0xd7, 0x8e, 0x0c, 0xf9, 0x05, 0x83, 0x13, 0x2a,
    0x44, 0x06, 0xbb, 0xb1, 0x72, 0x05, 0x7e, 0x9d, 0x0f, 0xe7, 0x69, 0xf4, 0x39, 0xf4, 0x1d, 0xae,
    0x27, 0x30, 0x57, 0x0f, 0xdd, 0xcc, 0x07, 0xad, 0x5a, 0xe0, 0x8e, 0x10, 0x30, 0x5f, 0xf3, 0x61,
    0x3d, 0x90, 0x9b, 0x3a, 0xcc, 0xc4, 0x04, 0x6c, 0x4f, 0xcd, 0x6b, 0xdd, 0xcb, 0xe9, 0xc3, 0xff,
    0x4b, 0x1c, 0x3a, 0x4e, 0xf8, 0xd1, 0xe7, 0x13, 0x96, 0x09, 0x02, 0x1d, 0xd7, 0x67, 0x85, 0x49,
    0x14, 0x6c, 0x28, 0xf4, 0xdd, 0x73, 0xcb, 0xbd, 0x5d, 0x7d, 0x08, 0x68, 0x58, 0x89, 0x8d, 0x46,
    0x60, 0x8c, 0xd1, 0x23, 0xf5, 0xf2, 0x98, 0x1a, 0xf5, 0x56, 0xf7, 0x2c, 0x03, 0x91, 0xe2, 0xd1,
    0xba, 0x75, 0x48, 0xb8, 0x5e, 0x81, 0xd5, 0x16, 0x4e, 0xd0, 0x35, 0xbb, 0xc6, 0xbf, 0x1e, 0xaf,
    0xaf, 0x2b, 0x8c, 0x0d, 0xb6, 0x4d, 0x21, 0x46, 0x2a, 0x6d, 0x1b, 0x7d, 0xcc, 0xd0, 0xf1, 0xb6,
    0x61, 0x6b, 0x6f, 0xeb, 0x59, 0x9f, 0xa8, 0x4d, 0x11, 0x7b, 0x6b, 0x5f, 0xd6, 0x83, 0xb3, 0xa6,
    0x52, 0x28, 0xd1, 0x4a, 0xbe, 0xc2, 0x8f, 0x02, 0x01, 0x03, 0xa3, 0x26, 0x30, 0x24, 0x30, 0x12,
    0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x08, 0x30, 0x06, 0x01, 0x01, 0xff, 0x02,
    0x01, 0x00, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04, 0x04, 0x03, 0x02,
    0x01, 0x06, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x04, 0x05,
    0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x8e, 0x50, 0x18, 0x89, 0x4a, 0x2a, 0x7d, 0x4d, 0x89, 0x2c,
    0xdb, 0x52, 0xb1, 0x5b, 0xa8, 0x64, 0x2a, 0x72, 0x54, 0xcc, 0x15, 0xc2, 0x90, 0xd4, 0x60, 0x66,
    0x60, 0xe3, 0xca, 0x5e, 0x62, 0x19, 0xa0, 0xc3, 0x42, 0xa3, 0xcb, 0x0c, 0xfb, 0x17, 0x8b, 0xd8,
    0x53, 0x2d, 0x86, 0xc4, 0x6e, 0x71, 0xf3, 0xa2, 0x3e, 0xfd, 0x88, 0x78, 0x23, 0x34, 0xd4, 0xba,
    0xe7, 0xc7, 0xfe, 0x4d, 0x16, 0xd0, 0xef, 0x11, 0x86, 0x5c, 0x98, 0xa8, 0x4b, 0x3c, 0x34, 0x0f,
    0xca, 0x45, 0xc5, 0x21, 0x20, 0xd6, 0x05, 0x6d, 0x7f, 0xa6, 0xa7, 0xd8, 0xb9, 0x47, 0x58, 0xc4,
    0x95, 0x5b, 0xc8, 0xa7, 0xf3, 0xee, 0xd0, 0x2c, 0x94, 0x93, 0x9c, 0x79, 0x10, 0x25, 0xa8, 0x31,
    0xc2, 0xfc, 0xe9, 0x52, 0x68, 0x29, 0x0a, 0x01, 0x7a, 0x26, 0xa2, 0x1d, 0x17, 0x88, 0xf8, 0xb2,
    0x54, 0xb4, 0x1f, 0xee, 0xed, 0x21, 0x28, 0xf3, 0x16, 0x74, 0x83, 0x0c, 0xc1, 0xbb, 0x7c, 0x3b,
    0xfd, 0xf4, 0x3f, 0x4d, 0xf9, 0x05, 0xbb, 0xc4, 0xe4, 0x68, 0x06, 0x99, 0xaa, 0x1b, 0x05, 0xb1,
    0x0e, 0xa5, 0x97, 0x2d, 0xc1, 0x88, 0x37, 0x41, 0x4e, 0x3c, 0x1a, 0x4d, 0xa7, 0xda, 0xe5, 0x2c,
    0x77, 0xcd, 0x63, 0x18, 0xae, 0xb6, 0x70, 0x26, 0x36, 0xd6, 0x0a, 0x32, 0xab, 0x3e, 0xdd, 0x4d,
    0xce, 0x8c, 0xea, 0x9a, 0x9e, 0x4f, 0xef, 0x30, 0x04, 0xa3, 0xce, 0x6a, 0x60, 0xc4, 0x67, 0x86,
    0x73, 0x10, 0x96, 0xb5, 0x0e, 0xc7, 0xe8, 0x48, 0x2c, 0x55, 0xb7, 0x6e, 0x80, 0x8c, 0x09, 0x1d,
    0x92, 0xf1, 0x29, 0xb3, 0x5f, 0x0b, 0xa3, 0xf2, 0x9f, 0x5c, 0x7f, 0x56, 0xb6, 0x4e, 0x4c, 0xcd,
    0x78, 0xf6, 0x8d, 0x4d, 0x72, 0x31, 0x29, 0x02, 0x03, 0x4c, 0xdc, 0x63, 0xc4, 0xed, 0x2a, 0x3b,
    0xbb, 0x47, 0x11, 0xea, 0xad, 0x0d
};
