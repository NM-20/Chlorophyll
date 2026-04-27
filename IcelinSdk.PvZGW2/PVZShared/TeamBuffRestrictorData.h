#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffRestrictorData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CE88
   RuntimeId:        278A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E15
   VfTable:          0000000142366120
   Address (Base):   00000001430F6D30
*/
#pragma pack(push, 8)
class TeamBuffRestrictorData : public BuffRestrictorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Neutral; /* 0x0010 */
  FB_BOOLEAN Friendly; /* 0x0011 */
  FB_BOOLEAN Hostile; /* 0x0012 */
  char pad_0013[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TeamBuffRestrictorData) == 24);

}
