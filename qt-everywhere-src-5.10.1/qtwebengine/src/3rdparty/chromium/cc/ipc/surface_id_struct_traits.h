// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_SURFACE_ID_STRUCT_TRAITS_H_
#define CC_IPC_SURFACE_ID_STRUCT_TRAITS_H_

#include "cc/ipc/frame_sink_id_struct_traits.h"
#include "cc/ipc/local_surface_id_struct_traits.h"
#include "cc/ipc/surface_id.mojom-shared.h"
#include "components/viz/common/surfaces/frame_sink_id.h"
#include "components/viz/common/surfaces/local_surface_id.h"
#include "components/viz/common/surfaces/surface_id.h"

namespace mojo {

template <>
struct StructTraits<cc::mojom::SurfaceIdDataView, viz::SurfaceId> {
  static const viz::FrameSinkId& frame_sink_id(const viz::SurfaceId& id) {
    return id.frame_sink_id();
  }

  static const viz::LocalSurfaceId& local_surface_id(const viz::SurfaceId& id) {
    return id.local_surface_id();
  }

  static bool Read(cc::mojom::SurfaceIdDataView data, viz::SurfaceId* out) {
    return data.ReadFrameSinkId(&out->frame_sink_id_) &&
           data.ReadLocalSurfaceId(&out->local_surface_id_);
  }
};

}  // namespace mojo

#endif  // CC_IPC_SURFACE_ID_STRUCT_TRAITS_H_
