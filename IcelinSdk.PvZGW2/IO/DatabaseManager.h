#pragma once

/** @brief Provides the declaration for the `DatabaseManager` class. */

#include <EASTL/string.h>

namespace fb
{

class DatabaseManager {
private:
  eastl::string m_databaseId;
  eastl::string m_displayName;
  eastl::string m_pipelineTag;
  eastl::string m_databaseFamily;
  eastl::string m_licenseeTag;

public:
  virtual ~DatabaseManager() = 0;
};

}
