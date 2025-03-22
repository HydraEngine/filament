//
// Created by Idris Idris Shah on 3/19/25.
//

#include "WebGPUSwapchain.h"


namespace filament::backend {
WebGPUSwapchain::WebGPUSwapchain(wgpu::Device device, uint32_t width, uint32_t height)
    :mDevice(device) {
    // createSwapchain(width, height);
}

// void WebGPUSwapchain::createSwapchain(int32_t width, int32_t height) {
//     wgpu::SwapchainDescriptor descriptor;
//     descriptor.usage = wgpu::TextureUsage::RenderAttachment;
//     descriptor.format = wgpu::TextureFormat::RGBA8Unorm;
//     descriptor.width = 1;
// }
}
