#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838180
   RuntimeId:        058A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DDA
   VfTable:          00000001421F9980
   Address (Base):   00000001430F2700
*/
#pragma pack(push, 8)
class VoiceOverNode : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverNode) == 16);

}
