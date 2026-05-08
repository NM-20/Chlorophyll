#pragma once

/** @brief Provides the declaration for the `StaticHashTableAllocator` class. */

#include <EASTL/type_traits.h>
#include <EASTL/internal/config.h>
#include <EASTL/internal/fixed_pool.h>
#include <EASTL/internal/hashtable.h>

namespace fb
{

template<typename Value, bool bAllowOverflow, bool bCacheHashCode, typename Allocator = EASTLAllocatorType, eastl_size_t nodeSize = sizeof(eastl::hash_node<Value, bCacheHashCode>), eastl_size_t nodeAlignment = EASTL_ALIGN_OF(Value)>
class StaticHashTableAllocator {
public:
  typedef typename eastl::type_select<bAllowOverflow, eastl::fixed_pool_with_overflow<Allocator>, eastl::fixed_pool>::type node_pool_type;

private:
  Allocator m_allocator;
  void *m_nodeBuffer;
  void *m_bucketBuffer;
  eastl_size_t m_count;
  node_pool_type m_nodePool;
};

}
