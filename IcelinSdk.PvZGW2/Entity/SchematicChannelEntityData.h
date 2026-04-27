#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A7E8
   RuntimeId:        07F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AAC
   VfTable:          000000014220C210
   Address (Base):   00000001430F0A80
*/
#pragma pack(push, 8)
class SchematicChannelEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class SchematicChannelAsset) Channel; /* 0x0020 */
  FB_STDARRAY(FB_INT32) InputProperties; /* 0x0028 */
  FB_STDARRAY(FB_INT32) InputRefProperties; /* 0x0030 */
  FB_STDARRAY(FB_INT32) OutputProperties; /* 0x0038 */
  FB_STDARRAY(FB_INT32) OutputRefProperties; /* 0x0040 */
  FB_BOOLEAN InputPropertiesEnabled; /* 0x0048 */
  FB_BOOLEAN WriteInputPropertiesOnEnabled; /* 0x0049 */
  FB_BOOLEAN IsGlobalChannel; /* 0x004A */
  char pad_004B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SchematicChannelEntityData) == 80);

}
