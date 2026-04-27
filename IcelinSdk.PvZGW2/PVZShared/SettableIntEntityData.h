#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865F08
   RuntimeId:        2363
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A00
   VfTable:          00000001423509A8
   Address (Base):   00000001430E7C60
*/
#pragma pack(push, 8)
class SettableIntEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 MinValue; /* 0x001C */
  FB_INT32 MaxValue; /* 0x0020 */
  FB_INT32 In; /* 0x0024 */
  FB_INT32 IncDecValue; /* 0x0028 */
  FB_BOOLEAN AlwaysTakeIn; /* 0x002C */
  FB_BOOLEAN DoRollover; /* 0x002D */
  FB_BOOLEAN Clamp; /* 0x002E */
  char pad_002F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SettableIntEntityData) == 48);

}
