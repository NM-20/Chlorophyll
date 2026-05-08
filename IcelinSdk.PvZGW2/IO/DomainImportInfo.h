#pragma once

/** @brief Provides the declaration for the `DomainImportInfo` structure. */

#include <IcelinSdk.PvZGW2/Core/String.h>

namespace fb
{

struct DomainImportInfo {
  String domain;
  bool readOnly;
};

}

