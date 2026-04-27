#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/EntryComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/AntEntryIdEnum.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E168
   RuntimeId:        11C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D8E
   VfTable:          00000001422733A0
   Address (Base):   00000001430D0A40
*/
#pragma pack(push, 16)
class PlayerEntryComponentData : public EntryComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 AnimationAccelerationMultiplier; /* 0x00F0 */
  FB_CSTRING AntEntryID; /* 0x0100 */
  AntEntryIdEnum AntEntryId; /* 0x0108 */
  char pad_010C[0x0004];
  FB_HANDLE(class AntEnumeration) AntEntryEnumeration; /* 0x0110 */
  char pad_0118[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(PlayerEntryComponentData) == 288);

}
