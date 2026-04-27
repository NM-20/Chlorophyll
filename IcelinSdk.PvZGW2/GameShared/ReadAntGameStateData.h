#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AntGameStateData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D2E0
   RuntimeId:        10F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F63
   VfTable:          00000001422743E8
   Address (Base):   00000001430BF010
*/
#pragma pack(push, 8)
class ReadAntGameStateData : public AntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ReadAntGameStateData) == 24);

}
