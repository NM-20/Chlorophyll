#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AbstractAwardData.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardGroup.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B770
   RuntimeId:        264C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC5
   VfTable:          000000014235AB08
   Address (Base):   00000001430E4C60
*/
#pragma pack(push, 8)
class AwardHeaderData : public AbstractAwardData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AwardGroup Group; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AwardHeaderData) == 32);

}
