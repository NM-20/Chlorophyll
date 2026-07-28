#pragma once

/** @brief Provides the declaration for the `PathName` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct PathName {
  const char *data;
  u32 length;
  const char *queryParameters;
};

}
