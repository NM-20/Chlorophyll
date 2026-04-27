#pragma once

#include <IcelinSdk.PvZGW2/GameCommon/TargetCameraCallback.h>
#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCameraEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A06
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0586
   VfTable:          0000000000000000
   Address (Base):   00000001431277D0
*/
class ClientTargetCameraEntity : public ClientCameraEntityBase
{
public:
  /* TypeInfo (Array): 0000000000000000
     RuntimeId:        0A05
     TypeInfo Kind:    ClassInfo
     ClassId:          0106
     VfTable:          0000000000000000
     Address (Base):   00000001431222D0
  */
  class Callback : public TargetCameraCallback
  {
  public:
    typedef struct ClassInfo TypeInfo_t;

    char pad_0008[0x0010];

  private:
    /* Intended for use in Ida. Do not remove. */
    static void IdaForceImport(TypeInfo_t);
  }; /* Size: 0x0018 */

  static_assert(sizeof(Callback) == 24);

  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0048[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ClientTargetCameraEntity) == 104);

}
