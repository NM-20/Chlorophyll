#pragma once

/** @brief Provides the declaration for the `RefCountBase` class. */

namespace fb
{

class RefCountBase {
private:
  mutable int m_refCount;

public:
  virtual ~RefCountBase();
};

}
