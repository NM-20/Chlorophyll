#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856108
   RuntimeId:        18C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D6E
   VfTable:          00000001422C4C48
   Address (Base):   00000001430E8D40
*/
#pragma pack(push, 16)
class AntiAliasComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 DisocclusionRejectionFactor; /* 0x0084 */
  FB_BOOLEAN Enable; /* 0x0088 */
  char pad_0089[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(AntiAliasComponentData) == 144);

}
