#pragma once

/** @brief Provides the declaration for the `RuntimePartitionAndDomain` structure. */

namespace fb
{

class RuntimeDatabaseDomain;
class RuntimeDatabasePartition;

struct RuntimePartitionAndDomain {
  RuntimeDatabasePartition *partition;
  RuntimeDatabaseDomain *domain;
};

}
