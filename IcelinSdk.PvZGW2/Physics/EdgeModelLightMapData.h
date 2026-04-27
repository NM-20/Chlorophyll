#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850E20
   RuntimeId:        1416
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F2
   VfTable:          000000014227F7A0
   Address (Base):   000000014310F750
*/
#pragma pack(push, 8)
class EdgeModelLightMapData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec4) LightMapUvs; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EdgeModelLightMapData) == 24);

}
