#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/SchematicTreeIO.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832B48
   RuntimeId:        00A8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0614
   VfTable:          00000001421E2E38
   Address (Base):   00000001430F3600
*/
#pragma pack(push, 8)
class SchematicTreeEvent : public SchematicTreeIO
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 EventId; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeEvent) == 32);

}
