#pragma once

/** @brief Provides the declaration for the `RuntimeDatabaseManager` class. */

#include <IcelinSdk.PvZGW2/CriticalSection.h>
#include <IcelinSdk.PvZGW2/IO/DatabaseDomain.h>
#include <IcelinSdk.PvZGW2/IO/InternalDatabaseManager.h>

#include <EASTL/fixed_vector.h>

namespace fb
{

class RuntimeDatabaseManager : public InternalDatabaseManager {
private:
  /* There seems to be three different database manager classes in Fb 2014, as
     there's three separate vftables. The fields are also handled within three
     different destructors.
     What I'm thinking is that `InternalDatabaseManager` was deprecated within
     Fb 2014 in favor of `RuntimeDatabaseManager`, which temporarily inherited
     from `InternalDatabaseManager` for migration.
  */

  typedef eastl::fixed_vector<DatabaseDomain *, 64> DatabaseDomainList;

  CriticalSection m_domainLock;
  DatabaseDomainList m_domains;
};

}
