#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838100
   RuntimeId:        0582
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FFD
   VfTable:          00000001421F99C0
   Address (Base):   00000001430FF850
*/
#pragma pack(push, 8)
class VoiceOverValue : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverValue) == 16);

}
