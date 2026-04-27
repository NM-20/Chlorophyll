#pragma once

/** @brief Provides the declaration for the `EntityTransformSpace` class. */

#include <IcelinSdk.PvZGW2/Entity/TransformSpace.h>

namespace fb
{

class EntityTransformSpace : public TransformSpace {
private:
  char pad_0060[0x0050];
};

}
