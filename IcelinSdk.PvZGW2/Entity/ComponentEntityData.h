#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A928
   RuntimeId:        080D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B03
   VfTable:          000000014220C130
   Address (Base):   00000001430D7C90
*/
#pragma pack(push, 16)
class ComponentEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class GameObjectData) Components; /* 0x0060 */
  FB_UINT8 ClientRuntimeComponentCount; /* 0x0068 */
  FB_UINT8 ServerRuntimeComponentCount; /* 0x0069 */
  FB_UINT8 ClientRuntimeTransformationCount; /* 0x006A */
  FB_UINT8 ServerRuntimeTransformationCount; /* 0x006B */
  char pad_006C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ComponentEntityData) == 112);

}
