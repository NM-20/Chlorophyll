#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/DestructionControllerComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839030
   RuntimeId:        065E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA8
   VfTable:          00000001421FDFA8
   Address (Base):   00000001430FE410
*/
#pragma pack(push, 16)
class BreakableControllerComponentData : public DestructionControllerComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 BreakablePartCount; /* 0x0090 */
  FB_UINT32 NetworkIdCount; /* 0x0094 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(BreakableControllerComponentData) == 160);

}
