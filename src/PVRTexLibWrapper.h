#pragma once

#include <cstddef>

extern "C"
{
    bool DecompressPVR(const void* pTexture, void* out, size_t size);
}
