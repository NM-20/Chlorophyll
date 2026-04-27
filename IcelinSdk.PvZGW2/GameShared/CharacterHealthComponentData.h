#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ControllableHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DDC0
   RuntimeId:        118D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D10
   VfTable:          0000000142273700
   Address (Base):   00000001430D0980
*/
#pragma pack(push, 16)
class CharacterHealthComponentData : public ControllableHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxHealth; /* 0x0070 */
  FB_FLOAT32 TimeForCorpse; /* 0x0074 */
  FB_BOOLEAN IsImmortal; /* 0x0078 */
  char pad_0079[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CharacterHealthComponentData) == 128);

}
