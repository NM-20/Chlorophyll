#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/EntityTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854C48
   RuntimeId:        17B3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB2
   VfTable:          00000001422B5698
   Address (Base):   00000001430EA3C0
*/
#pragma pack(push, 8)
class DummyEntityTrackData : public EntityTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(DummyEntityTrackData) == 56);

}
