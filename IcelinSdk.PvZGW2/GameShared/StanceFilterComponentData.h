#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CA68
   RuntimeId:        1088
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D3B
   VfTable:          00000001422676D8
   Address (Base):   00000001430D7030
*/
#pragma pack(push, 16)
class StanceFilterComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_INT32) ValidStances; /* 0x0070 */
  FB_FLOAT32 StanceChangeTime; /* 0x0078 */
  char pad_007C[0x0004];
  FB_STDARRAY(struct ActionSuppressor) ActionsToFilter; /* 0x0080 */
  FB_BOOLEAN UndoParentStanceFilter; /* 0x0088 */
  FB_BOOLEAN FilterSpecificActions; /* 0x0089 */
  char pad_008A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(StanceFilterComponentData) == 144);

}
