#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/VisualVectorShapeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428545F8
   RuntimeId:        1744
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          097B
   VfTable:          00000001422AF190
   Address (Base):   000000014310DD70
*/
#pragma pack(push, 8)
class LakeData : public VisualVectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(LakeData) == 64);

}
