#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838B08
   RuntimeId:        061E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0956
   VfTable:          00000001421F9570
   Address (Base):   00000001431163B0
*/
#pragma pack(push, 8)
class FinalDraftLineInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(FinalDraftLineInfo) == 16);

}
