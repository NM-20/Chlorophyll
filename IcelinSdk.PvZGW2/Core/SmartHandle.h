#pragma once

/** @brief Provides the declaration for the `SmartHandle` class. */

#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* These are not really used anywhere else, so we will contain them
   within this header.
*/
struct DataContainerHandle {
  DataContainer *dc;
};

class SmartDcHandle {
protected:
  DataContainerHandle m_dumb;
};

template<class T>
class SmartHandle : public SmartDcHandle {
public:
  typedef SmartDcHandle Base;

  /* The template parameter is likely intended for implicit casting
     to the genuine type, so we will leave it in for implementation
     later.
  */
};

}
