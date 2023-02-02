// Copyright 2020-2023 The Defold Foundation
// Copyright 2014-2020 King
// Copyright 2009-2014 Ragnar Svensson, Christian Murray
// Licensed under the Defold License version 1.0 (the "License"); you may not use
// this file except in compliance with the License.
// 
// You may obtain a copy of the License, together with FAQs at
// https://www.defold.com/license
// 
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#include <dmsdk/dlib/profile.h>
#include <stdio.h>

// Null implementations of the Remotery api
RMT_API void _rmt_BeginCPUSample(rmtPStr name, rmtU32 flags, rmtU32* hash_cache)
{
    //printf("MAWE: %s : %d\n", __FILE__, __LINE__);
}
RMT_API void _rmt_EndCPUSample(void)
{
    //printf("MAWE: %s : %d\n", __FILE__, __LINE__);
}
RMT_API void _rmt_PropertySetValue(rmtProperty* property)
{
    //printf("MAWE: %s : %d\n", __FILE__, __LINE__);
}
RMT_API void _rmt_PropertyAddValue(rmtProperty* property, rmtPropertyValue add_value)
{
    //printf("MAWE: %s : %d\n", __FILE__, __LINE__);
}
RMT_API rmtError _rmt_PropertySnapshotAll() { return RMT_ERROR_NONE; }
RMT_API void _rmt_PropertyFrameResetAll()
{
    //printf("MAWE: %s : %d\n", __FILE__, __LINE__);
}
