//
// Created by Idris Idris Shah on 3/19/25.
//

#ifndef TNT_FILAMENT_BACKEND_WEBGPUSWAPCHAIN_H
#define TNT_FILAMENT_BACKEND_WEBGPUSWAPCHAIN_H

#include "DriverBase.h"

#include <webgpu/webgpu_cpp.h>

namespace filament::backend {
class WebGPUSwapchain final: public HwSwapChain {
    public:
        WebGPUSwapchain(wgpu::Device device, uint32_t width, uint32_t height);
        ~WebGPUSwapchain();
        wgpu::TextureView getCurrentTextureView();
        void present();
    private:
        // wgpu::SwapChain mSwapchain;
        wgpu::Device mDevice;
        wgpu::Surface mSurface;
};
} // namespace filament::backend
#endif // TNT_FILAMENT_BACKEND_WEBGPUSWAPCHAIN_H
