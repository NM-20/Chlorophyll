#pragma once

/** @brief Provides the declaration for the `StaticHashMap` class. */

#include <IcelinSdk.PvZGW2/Memory/StaticHashTableAllocator.h>

#include <EASTL/functional.h>
#include <EASTL/hash_map.h>
#include <EASTL/internal/config.h>

namespace fb
{

template<typename Key, typename Value, bool bAllowOverflow = true, typename Hash = eastl::hash<Key>, typename Predicate = eastl::equal_to<Key>, bool bCacheHashCode = false, typename Allocator = EASTLAllocatorType>
class StaticHashMap : public eastl::hash_map<Key, Value, Hash, Predicate, StaticHashTableAllocator<eastl::pair<const Key, Value>, bAllowOverflow, bCacheHashCode, Allocator>, bCacheHashCode> {
};

}
