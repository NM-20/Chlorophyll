#pragma once

/** @brief Provides the declaration for the `SyncObject` class. */

#include <IcelinSdk.PvZGW2/Jobs/SyncWaiter.h>

namespace EA::Jobs
{

class SyncObject {
private:
  struct TypeDescriptor {
    typedef void (*AddWaiterFunction)(SyncObject *this_, SyncWaiter *waiter);
    AddWaiterFunction mAddWaiter;
  };

  TypeDescriptor *mTypeDescriptor;
};

}
