// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/mac/scoped_mach_port.h"

namespace base {
namespace mac {
namespace internal {

// static
void SendRightTraits::Free(mach_port_t port) {
  kern_return_t kr = mach_port_deallocate(mach_task_self(), port);
}

// static
void ReceiveRightTraits::Free(mach_port_t port) {
  kern_return_t kr =
      mach_port_mod_refs(mach_task_self(), port, MACH_PORT_RIGHT_RECEIVE, -1);
}

// static
void PortSetTraits::Free(mach_port_t port) {
  kern_return_t kr =
      mach_port_mod_refs(mach_task_self(), port, MACH_PORT_RIGHT_PORT_SET, -1);
}

}  // namespace internal
}  // namespace mac
}  // namespace base
