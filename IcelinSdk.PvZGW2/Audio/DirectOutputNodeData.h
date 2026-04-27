#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/OutputNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837100
   RuntimeId:        048A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1219
   VfTable:          00000001421FA3B0
   Address (Base):   00000001430FEA70
*/
#pragma pack(push, 8)
class DirectOutputNodeData : public OutputNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DirectOutputNodeData) == 128);

}
