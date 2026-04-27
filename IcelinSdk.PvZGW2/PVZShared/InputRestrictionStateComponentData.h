#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428637A0
   RuntimeId:        2120
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D67
   VfTable:          00000001423536F8
   Address (Base):   00000001430E6280
*/
#pragma pack(push, 16)
class InputRestrictionStateComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct InputRestrictionState) States; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(InputRestrictionStateComponentData) == 128);

}
