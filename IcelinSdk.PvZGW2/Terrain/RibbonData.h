#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/VisualVectorShapeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854598
   RuntimeId:        173E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0976
   VfTable:          00000001422AF228
   Address (Base):   00000001430EA7E0
*/
#pragma pack(push, 8)
class RibbonData : public VisualVectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct RibbonPointData) RibbonPoints; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(RibbonData) == 72);

}
