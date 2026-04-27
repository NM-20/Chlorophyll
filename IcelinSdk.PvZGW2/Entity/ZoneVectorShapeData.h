#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VectorShapeData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B668
   RuntimeId:        08DC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0974
   VfTable:          000000014220AE20
   Address (Base):   0000000143115330
*/
#pragma pack(push, 8)
class ZoneVectorShapeData : public VectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ZoneVectorShapeData) == 40);

}
