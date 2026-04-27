#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A8D0
   RuntimeId:        25B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B85
   VfTable:          000000014235B1A8
   Address (Base):   00000001430E47E0
*/
#pragma pack(push, 16)
class UIObjectTagEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIObjectTagTreeNodeClass) ObjectType; /* 0x0060 */
  FB_FLOAT32 MaxHealth; /* 0x0068 */
  FB_FLOAT32 Health; /* 0x006C */
  FB_CSTRING OverrideLabel; /* 0x0070 */
  FB_BOOLEAN Enabled; /* 0x0078 */
  FB_BOOLEAN EnabledOnlyForPlayers; /* 0x0079 */
  char pad_007A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UIObjectTagEntityData) == 128);

}
