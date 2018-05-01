/*
 *  Copyright (c) 2016 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "webrtc/modules/audio_coding/audio_network_adaptor/include/audio_network_adaptor.h"

namespace webrtc {

AudioEncoderRuntimeConfig::AudioEncoderRuntimeConfig() = default;

AudioEncoderRuntimeConfig::~AudioEncoderRuntimeConfig() = default;

AudioEncoderRuntimeConfig::AudioEncoderRuntimeConfig(
    const AudioEncoderRuntimeConfig& other) = default;

}  // namespace webrtc