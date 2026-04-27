#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428375A0
   RuntimeId:        04D4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD5
   VfTable:          00000001421FA208
   Address (Base):   0000000143117910
*/
#pragma pack(push, 8)
class PointEnvelope : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PointEnvelopePoint) Points; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PointEnvelope) == 24);

}
