#pragma once

/** @brief Provides the declaration for the `ReaderWriterLock` class. */

#include <IcelinSdk.PvZGW2/Utilities/Noncopyable.h>

namespace fb
{

class ReaderWriterLock : Noncopyable {
private:
  void *m_srwLock;
};

}
