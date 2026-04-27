#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/IglooMemoryContext.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1535
   TypeInfo Kind:    ClassInfo
   ClassId:          00BF
   VfTable:          0000000000000000
   Address (Base):   0000000143120330
*/
#pragma pack(push, 8)
class HavokMemoryContext : public IglooMemoryContext
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HavokMemoryContext) == 16);

}
