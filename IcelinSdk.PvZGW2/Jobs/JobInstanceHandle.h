#pragma once

/** @brief Provides the declaration for the `JobInstanceHandle` class. */

#include <IcelinSdk.PvZGW2/Jobs/SyncObject.h>
#include <IcelinSdk.PvZGW2/Jobs/Detail/JobInstance.h>

#include <cstdint>

namespace EA::Jobs
{

class JobInstanceHandle : public SyncObject {
private:
  Detail::JobInstance *mInstance;
  uint32_t mInstanceTag;
  char pad_0014[0x0004];
};

}
