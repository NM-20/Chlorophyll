#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142840478
   RuntimeId:        0AD5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E11
   VfTable:          0000000142232820
   Address (Base):   00000001430EEA40
*/
#pragma pack(push, 8)
class PA2LookAtGameStateSetting : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameState; /* 0x0010 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PA2LookAtGameStateSetting) == 40);

}
