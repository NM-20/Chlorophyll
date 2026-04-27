#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428382A0
   RuntimeId:        059C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0892
   VfTable:          00000001421F9900
   Address (Base):   0000000143116DD0
*/
#pragma pack(push, 8)
class VoiceOverStructureConnection : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverStructureNode) TargetNode; /* 0x0010 */
  FB_HANDLE(class VoiceOverRelationshipInput) TargetInput; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverStructureConnection) == 32);

}
