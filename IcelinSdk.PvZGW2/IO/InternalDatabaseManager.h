#pragma once

/** @brief Provides the declaration for the `InternalDatabaseManager` class. */

#include <IcelinSdk.PvZGW2/IO/DatabaseManager.h>
#include <IcelinSdk.PvZGW2/IO/DomainInfo.h>
#include <IcelinSdk.PvZGW2/IO/VirtualFileSystem.h>

#include <EASTL/list.h>

namespace fb
{

class InternalDatabaseManager : public DatabaseManager {
private:
  typedef eastl::list<DomainInfo> DomainInfoList_t;

  VirtualFileSystem *m_fileSystem;

  /* TODO: These fields don't seem to be used anywhere; try to figure out what
     they are.
  */
  char pad_00B0[0x0038];

  DomainInfo m_neutralDomainInfo;
  DomainInfoList_t m_domainInfo;

  /* TODO: There's a chance this might be a field, but there's not really a way
     to immediately verify this. Look more into it.
  */
  char pad_0188[0x0008];

public:
  ~InternalDatabaseManager();
};

}
