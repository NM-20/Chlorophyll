#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/IKEffectorEnum.h>
#include <IcelinSdk.PvZGW2/GameShared/HIKData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CDF8
   RuntimeId:        10BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D28
   VfTable:          0000000142267230
   Address (Base):   00000001430ECEE0
*/
#pragma pack(push, 16)
class IKComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  IKEffectorEnum IKEffector; /* 0x0070 */
  HIKData IKData; /* 0x0074 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(IKComponentData) == 144);

}
