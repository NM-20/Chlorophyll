#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839190
   RuntimeId:        0670
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C92
   VfTable:          00000001421FDE30
   Address (Base):   0000000143115F30
*/
#pragma pack(push, 8)
class ConnectivityEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_INT32) BreakableModelEventIds; /* 0x0018 */
  FB_STDARRAY(FB_INT32) StaticModelEventIds; /* 0x0020 */
  FB_STDARRAY(FB_UINT32) StaticModelFirstIndices; /* 0x0028 */
  FB_STDARRAY(struct StaticModelToBreakableParts) StaticModelToBreakablePartsArray; /* 0x0030 */
  FB_STDARRAY(struct BreakablePartToStaticEntityPart) BreakablePartToStaticModelPartArray; /* 0x0038 */
  FB_FLOAT32 BreakableModelExtraRadius; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ConnectivityEntityData) == 72);

}
