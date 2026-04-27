#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838380
   RuntimeId:        05AA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0838
   VfTable:          00000001421F98B0
   Address (Base):   00000001430D1040
*/
#pragma pack(push, 8)
class VoiceOverConstantValue : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConstantValue) == 16);

}
