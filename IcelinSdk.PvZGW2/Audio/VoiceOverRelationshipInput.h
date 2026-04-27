#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838280
   RuntimeId:        059A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          116E
   VfTable:          00000001421F9910
   Address (Base):   0000000143116E30
*/
#pragma pack(push, 8)
class VoiceOverRelationshipInput : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverRelationshipInput) == 16);

}
