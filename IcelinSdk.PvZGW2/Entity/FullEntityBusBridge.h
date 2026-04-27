#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityBusPeer.h>

namespace fb
{

class FullEntityBus
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        07AF
   TypeInfo Kind:    ClassInfo
   ClassId:          0125
   VfTable:          0000000000000000
   Address (Base):   0000000143122550
*/
class FullEntityBusBridge : public EntityBusPeer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(FullEntityBusBridge) == 32);

};

}
