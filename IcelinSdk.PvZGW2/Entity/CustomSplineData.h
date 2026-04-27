#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VectorShapeData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B628
   RuntimeId:        08D8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0970
   VfTable:          000000014220AE60
   Address (Base):   00000001430FDF90
*/
#pragma pack(push, 8)
class CustomSplineData : public VectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CustomSplineData) == 40);

}
