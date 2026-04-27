#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/Physics/DebrisInsertType.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableInt.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850E00
   RuntimeId:        1414
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0987
   VfTable:          000000014227F808
   Address (Base):   000000014310F7B0
*/
#pragma pack(push, 16)
class DestructionDebrisReferenceObjectData : public SpatialReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DebrisInsertType InsertType; /* 0x00A0 */
  FB_FLOAT32 Gap; /* 0x00A4 */
  QualityScalableInt MaxPieceCount; /* 0x00A8 */
  FB_UINT32 RandomSeed; /* 0x00B8 */
  char pad_00BC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(DestructionDebrisReferenceObjectData) == 192);

}
