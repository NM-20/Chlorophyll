#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityBusPeer.h>

namespace fb
{

class ProxyEntityBus
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        07B0
   TypeInfo Kind:    ClassInfo
   ClassId:          0126
   VfTable:          0000000000000000
   Address (Base):   0000000143124B70
*/
class ProxyEntityBusBridge : public EntityBusPeer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(ProxyEntityBusBridge) == 32);

};

}
