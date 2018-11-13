/*
 * Copyright 2018 Metrological
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <nagra/prm_asm.h>

namespace CDMi {

struct IMediaSessionConnect;

struct IMediaSessionSystem {

    static IMediaSessionSystem* SystemSession();

    virtual void RegisterConnectSession(IMediaSessionConnect* session) = 0;
    virtual void UnregisterConnectSession(IMediaSessionConnect* session) = 0;

    virtual TNvSession ApplicationSession() const = 0;

    virtual void Addref() const = 0;
    virtual uint32_t Release() const = 0;

};
  


} // namespace CDMi
