#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VectorShapeData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B648
   RuntimeId:        08DA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          096F
   VfTable:          000000014220ADE0
   Address (Base):   00000001430BF190
*/
#pragma pack(push, 8)
class VolumeVectorShapeData : public VectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Height; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VolumeVectorShapeData) == 48);

}
