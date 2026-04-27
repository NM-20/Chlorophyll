#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B4B8
   RuntimeId:        08C2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B7E
   VfTable:          000000014220B0A0
   Address (Base):   00000001430D7CF0
*/
#pragma pack(push, 16)
class VisibleAreaEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0060 */
  FB_FLOAT32 VisualCullScreenArea; /* 0x0064 */
  FB_UINT32 HideTreshold; /* 0x0068 */
  char pad_006C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(VisibleAreaEntityData) == 112);

}
