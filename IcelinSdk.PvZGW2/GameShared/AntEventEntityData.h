#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D2A0
   RuntimeId:        10F3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B9D
   VfTable:          0000000142274468
   Address (Base):   00000001430D6130
*/
#pragma pack(push, 8)
class AntEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct AntEventData) OnEnterEvents; /* 0x0018 */
  FB_STDARRAY(struct AntEventData) OnUpdateEvents; /* 0x0020 */
  FB_STDARRAY(struct AntEventData) OnLeaveEvents; /* 0x0028 */
  FB_BOOLEAN RequireLink; /* 0x0030 */
  FB_BOOLEAN SendAsPlayerEvent; /* 0x0031 */
  FB_BOOLEAN AutoActivate; /* 0x0032 */
  char pad_0033[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AntEventEntityData) == 56);

}
