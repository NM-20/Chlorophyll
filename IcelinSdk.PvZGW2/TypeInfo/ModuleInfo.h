#pragma once

/** @brief Provides the declaration for the `ModuleInfo` class. */

namespace fb
{

class ModuleInfo {
public:
  const char       *m_moduleName;
  const ModuleInfo *m_nextModule;
  
  /* This seems to be completely excluded from retail, so we won't
     attempt to describe the layout.
  */
  class TestList *m_testList;
};

}
