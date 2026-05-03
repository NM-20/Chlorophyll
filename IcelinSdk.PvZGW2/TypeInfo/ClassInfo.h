#pragma once

/** @brief Provides the declaration for the `ClassInfo` structure. */

#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>
#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>
#include <IcelinSdk.PvZGW2/TypeInfo/FieldInfo.h>
#include <IcelinSdk.PvZGW2/TypeInfo/ITypedObject.h>

namespace fb
{

/* In Frostbite, this isn't scoped to `ClassInfo`, so we will do the same for the accuracy. */
typedef u16 ClassId;
  
class ClassInfo : public TypeInfo {
public:
  typedef ITypedObject *(*CreateFun_t)(void *place, MemoryArena &arena, bool makeRoomForGuid);

  struct TypeInfoData {
    TypeInfo::TypeInfoData          basicInfo;
    const ClassInfo                *superClass;
    CreateFun_t                     createFun;
    const FieldInfo::FieldInfoData *fields;
  };

protected:
  /* TODO: Investigate why there's two definitions of the super class (maybe to make it easier
     to retrieve without needing to grab the `ClassInfo`?)
  */
  const ClassInfo *m_super;
  DataContainer   *m_defaultInstance;
  ClassId          m_classId;
  ClassId          m_lastSubclassId;
  char             pad_002C[0x0004];
  const ClassInfo *m_firstDerivedClass;
  const ClassInfo *m_nextSiblingClass;

  /* TODO: There cannot possibly be this much padding within `ClassInfo`. Give this a look. */
  char pad_0040[0x0010];

  /* This `TypeInfo` variation is unique in that it has variations of its own, notably such as
     these:
     `EntityClassInfo` for classes derived from `Entity` and `DataContainerClassInfo` for each
     class derived from `DataContainer`.
  */
};

}
