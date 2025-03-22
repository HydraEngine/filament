//
// Created by Idris Idris Shah on 3/21/25.
//

#ifndef TNT_FILAMENT_BACKEND_WEBGPUHANDLES_H
#define TNT_FILAMENT_BACKEND_WEBGPUHANDLES_H

#include "DriverBase.h"

namespace filament::backend {
    struct WGPUVertexBufferInfo : public HwVertexBufferInfo {
        WGPUVertexBufferInfo(uint8_t bufferCount, uint8_t attributeCount,
                AttributeArray const& attributes)
                : HwVertexBufferInfo(bufferCount, attributeCount),
                  attributes(attributes) {
        }
        AttributeArray attributes;
    };
}
#endif // TNT_FILAMENT_BACKEND_WEBGPUHANDLES_H
